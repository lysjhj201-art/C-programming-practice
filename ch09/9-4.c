#include <stdio.h>  // 배열들의 메모리 할당

void main()
{
    int aa[3] = {10, 20, 30};

    printf("aa[0]의 값은 %d, 주소는 %d\n", aa[0], &aa[0]);
    printf("aa[1]의 값은 %d, 주소는 %d\n", aa[1], &aa[1]);
    printf("aa[2]의 값은 %d, 주소는 %d\n", aa[2], &aa[2]);
    printf("배열 이름 aa의 값(=주소)는 %d\n", aa);  // 배열 aa의 주소는 &aa가 아니라 그냥 aa

    printf("\n");

    short bb[3] = {10, 20, 30};  // short는 각 정수형 변수가 2바이트씩 차지

    printf("bb[0]의 값은 %d, 주소는 %d\n", bb[0], &bb[0]);
    printf("bb[1]의 값은 %d, 주소는 %d\n", bb[1], &bb[1]);
    printf("bb[2]의 값은 %d, 주소는 %d\n", bb[2], &bb[2]);
    printf("배열 이름 bb의 값(=주소)는 %d\n", bb);

    printf("\n");

    char cc[3] = {'A', 'B', 'C'};  // char는 각 문자형 변수가 1바이트씩 차지

    printf("cc[0]의 값은 %c, 주소는 %d\n", cc[0], &cc[0]);
    printf("cc[1]의 값은 %c, 주소는 %d\n", cc[1], &cc[1]);
    printf("cc[2]의 값은 %c, 주소는 %d\n", cc[2], &cc[2]);
    printf("배열 이름 cc의 값(=주소)는 %d\n", cc);
}
