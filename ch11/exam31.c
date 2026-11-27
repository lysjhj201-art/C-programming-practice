#include <stdio.h>  // 파일에서 읽어온 문자열을 파일에 반대 순서로 출력

void main()
{
    FILE *rfp, *wfp;  // 파일 포인터를 선언한다.
    char str1[200], str2[200];  // 입력 문자열, 출력 문자열을 선언한다.
    int size, i;  // 변수를 선언한다.

    rfp = fopen("c:\\temp\\in.txt", "r");  // 입력 파일과 출력 파일을 연다.
    wfp = fopen("c:\\temp\\out.txt", "w");

    while(1)  // 무한 루프
    {
        fgets(str1, 200, rfp);  // 입력 파일의 문자열을 읽는다.

        if(feof(rfp))  // 입력 파일의 끝이면 종료한다.
            break;

        size = strlen(str1);  // 문자열의 길이를 세서 size에 넣는다.
        for(i=size-1; i>=0; i--)  // '문자열 길이 -1' 만큼 반복하며 입력 문자열과 출력 문자열의 위치를 바꾼다.
            str2[size-1-i] = str1[i-1];

        str2[size-1] = '\0';  // 출력 문자열의 맨 끝에 널 문자를 추가한다.
        fputs(str2, wfp);     // 출력 문자열을 출력 파일에 쓰고 줄 바꿈을 한다.
        fputs("\n", wfp);
    }

    fclose(rfp);
    fclose(wfp);
}