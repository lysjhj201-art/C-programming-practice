#include <stdio.h>  // 서식화된 입출력 함수 사용 예

void main()
{
    int a;      // 정수형
    float b;    // 실수형
    char ch;    // 문자형
    char s[20];  // 문자 배열

    printf("정수를 입력: ");
    scanf("%d", &a);
    printf("실수를 입력: ");
    scanf("%f", &b);
    printf("문자를 입력: ");
    scanf(" %c", &ch);    // 13행의 enter를 무시하기 위해 %c 앞에 공백 필요하다.
    printf("문자열을 입력: ");
    scanf("%s", s);       // 배열 s는 그 자체가 주소이므로 &를 사용하지 않는다.

    printf("\n정수의 10진수: %d\n", a);
    printf("정수의 16진수: %X\n", a);
    printf("정수의 8진수: %o\n", a);

    printf("실수: %10.3f\n", b);
    printf("실수(공학용): %e\n", b);

    printf("문자: %c\n", ch);
    printf("문자열: %s\n", s);

    
}
