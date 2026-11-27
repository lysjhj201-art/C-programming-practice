#include <stdio.h>  // 문자열 입출력 함수 사용 예

void main()
{
    char s[20];

    printf("문자열을 입력: ");
    gets(s);    // 문자열을 입력한다. 최대 19자 입력 가능. 문자배열크기 - 1

    puts(s);     // 문자열을 출력한다.
}