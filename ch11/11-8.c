#include <stdio.h>  // 파일을 이용한 입력 예 2

void main()
{
    char str[200];
    FILE *rfp;      // 파일 포인터를 선언한다.

    rfp = fopen("c:\\window\\win.ini", "r");  // 읽어올 파일을 연다.

    for( ; ; )      // 무한 루프
    {
        fgets(str, 200, rfp);  // 파일에서 한줄씩 읽어온다.

        if(feof(rfp))  // 파일의 끝이라면 for문을 종료한다. feof() 함수는 현재 파일의 위치가 끝인지 확인한다.
            break;

        printf("%s", str);
    }

    fclose(rfp);    // 파일을 닫는다.
}