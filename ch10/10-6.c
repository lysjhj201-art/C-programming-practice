#include <stdio.h>  // 지역변수와 전역변수의 구분

int a = 100;  // 전역변수 a 선언하고 초깃값 대입한다.

void func1()
{
    int a = 200;  // 지역변수 a 선언하고 초깃값 대입한다.
    printf("fun1() 에서 a의 값: %d\n", a);  // 전역변수를 출력한다.
}

void main()
{
    func1();  // 함수를 호출한다.
    printf("main() 에서 a의 값: %d\n", a);  // 전역변수를 출력한다.
}