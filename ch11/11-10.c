#include <stdio.h>  // 파일을 이용한 출력 예 1

void main()
{
    char s[20];
    FILE *wfp;

    wfp = fopen("c:\\temp\\data3.txt", "w");  // 파일을 쓰기모드로 연다.

    printf("문자열을 입력(최대 19자): ");
    gets(s);

    fputs(s, wfp);  // 입력된 내용을 파일에 쓴다.

    fclose(wfp);
}