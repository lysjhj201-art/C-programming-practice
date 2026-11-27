#include <stdio.h>  // 문자 입출력 함수 사용 예 4

void main()
{
    char ch;

    printf("문자열을 입력하세요: ");
    ch = getchar();  // 문자 1개 입력받는다.
    putchar(ch);     // 버퍼에서 문자를 읽어 모니터에 출력한다.

    ch = getchar();  // 문자 1개 입력받는다.
    putchar(ch);     // 버퍼에서 문자를 읽어 모니터에 출력한다.    
    
    ch = getchar();  // 문자 1개 입력받는다.
    putchar(ch);     // 버퍼에서 문자를 읽어 모니터에 출력한다.    
}