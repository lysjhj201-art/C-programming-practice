#include <stdio.h>  // 변수의 주소 알아내기

void main()
{
    int a = 100;
    int b = 200;

    printf("변수 a의 주소는 %d 입니다.\n", &a); // &를 붙혀서 a의 주소를 출력한다.
    printf("변수 b의 주소는 %d 입니다.\n", &b);
}