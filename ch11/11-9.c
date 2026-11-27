#include <stdio.h>  // 파일을 이용한 입력 예 3

void main()
{
    FILE *rfp;    // 파일 포인터 선언
    int hap = 0;  // 합계 변수를 선언하고 초기화한다.
    int in, i;    // 읽어올 숫자 변수와 반복을 위한 변수이다.

    rfp = fopen("c\\temp\\data2.txt", "r");  // 읽기 모드로 파일을 연다.

    for(i=0; i<5; i++)  // 5회 반복하면서 파일 포인터에서 정수를 읽어오고 합계를 누적한다.
    {
        fscanf(rfp, "%d", &in);
        hap = hap + in;
    }

    printf("합계 ==> %d\n", hap);  // 합계를 출력한다.

    fclose(rfp);   // 파일을 닫는다.
}