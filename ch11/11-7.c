#include <stdio.h>  // 파일을 이용한 입력 예 1

void main()
{
    char s[20];  // 문자 배열을 선언한다.
    FILE *rfp;   // 파일 포인터를 선언한다.

    rfp = fopen("c:\\temp\\data1.txt", "r");  // 파일 읽기(r) 모드로 연다. 폴더와 파일의 경로는 '\'를 2개씩 써야 한다.

    fgets(s, 20, rfp);

    printf("파일에서 읽은 문자열: ");
    puts(s);  // 모니터에 문자열을 출력한다.

    fclose(rfp);  // 파일 닫기
}