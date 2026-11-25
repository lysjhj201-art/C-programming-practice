#include <stdio.h>  // 포인터의 관계 이해하기

void main()
{
    char ch;
    char* p;
    char* q;

    ch = 'A';  // ch에 A 대입
    p = &ch;   // p에 ch의 주솟값 대입

    q = p;  // p의 값을 q에 대입

    *q = 'Z';  // *q가 실제로 가리키는 곳의 값을 변경

    printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
}