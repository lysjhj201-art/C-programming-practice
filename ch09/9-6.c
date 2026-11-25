#include <stdio.h>  // 일반 변수와 포인터 변수의 관계

void main()
{
    char ch;  // 문자형 변수 선언
    char* p;  // 포인터 변수 선언

    ch = 'A';  // 문자 A를 ch에 대입
    p = &ch;   // ch의 주소를 p에 대입

    printf("ch가 가지고 있는 값: ch ==> %c\n", ch);
    printf("ch의 주소: &ch ==> %d\n", &ch);
    printf("p가 가지고 있는 값: p ==> %d\n", p);  //p: p에 들어가 있는 ch의 주솟값이 나옴
    printf("p가 가리키는 곳의 실제 값: *p ==> %c\n", *p);  // *p: p가 가리키고 있는 주솟값의 실제 값 (ch=)A가 나옴
}