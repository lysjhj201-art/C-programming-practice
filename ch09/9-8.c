#include <stdio.h>  // 문자형 배열과 포인터의 관계 1

void main()
{
    char s[8] = "Basic-C";  // 문자형 배열 선언하고 초깃값 대입
    char *p;  // 문자형 포인터 변수 선언

    p = s;  // p에 배열 s의 '주소'를 대입

    printf("&s[3] ==> %s\n", &s[3]);  // 문자열과 포인터의 주솟값을 %s로 출력
    printf("p+3 ==> %s\n\n", p+3);

    printf("s[3] ==> %c\n", s[3]);  // 문자와 포인터의 실제값을 %c로 출력한다.
    printf("*(p+3) ==> %c\n", *(p+3));
}