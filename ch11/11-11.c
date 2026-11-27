#include <stdio.h>  // 파일을 이용한 출력 예 2

void main()
{
    char str[200];
    FILE *rfp;  // 읽기용, 쓰기용 파일 포인터를 허용한다.
    FILE *wfp;

    rfp = fopen("c:\\windows\\sin.ini", "r");
    wfp = fopen("c:\\temp\\data5.txt", "w");

    for( ; ; )
    {
        fgets(str, 200, rfp);  // 읽기용 파일에서 한 줄을 읽는다. 최대 199자까지 읽을 수 있다.

        if(feof(rfp))          // 읽기용 파일의 끝을 만나면 for문을 빠져나간다.
            break;
        
        fputs(str,wfp);         // 쓰기용 파일에 한 줄을 쓴다.
    }

    fclose(rfp);
    fclose(wfp);
}