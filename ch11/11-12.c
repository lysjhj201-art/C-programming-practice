#include <stdio.h>  // 파일을 이용한 출력 예 3

void main()
{
    FILE *wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("c:\\temp\\data7.txt", "w");  // 쓰기 모드로 파일 연다.

    for(i=0; i<5; i++)                   // 5회 반복하면서 입력받은 숫자의 합계를 누적한다.
    {
        printf(" 숫자 %d: ", i+1);
        scanf("%d", &in);
        hap = hap + in;
    }

    fprintf(wfp, "합계 ==>: %d\n", hap);  // 합계를 파일에 쓴다.

    fclose(wfp);
}