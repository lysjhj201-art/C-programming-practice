#include <stdio.h>  // 구구단을 파일에 출력.

void main()
{
    FILE *wfp;  // 파일 포인터 선언
    int i, k;   // 변수 선언

    wfp = fopen("c:\\temp\\gugu.txt", "w");  // 쓰기 모드로 파일을 연다.

    for(i=2; i<=9; i++)  // 첫 줄에 단 제목을 출력한다.
        fprintf(wfp, " #제%d단", i);

    fprintf(wfp, "\n\n");  // 줄 넘김을 출력한다.
    
    for(i=1; i<=9; i++)    // 반복문을 돌면서 출력되는 구구단을 'gugu.txt' 파일에 저장한다.
    {
        for(k=2; k<=9; k++)
        {
            fprintf(wfp, "%2dX%2d=%2d", k, i, k*i);
        }
        fprintf(wfp, "\n");
    }

    fclose(wfp);
}