#include <stdio.h> // 반환값 유무에 따른 함수 비교

void func1()  // 반환값 없음: void 형 함수
{
    printf("void 형 함수는 돌려줄 게 없음.\n");
}

int func2() // 반환값 있음
{
    return 100; // func2 함수를 호출한 곳에 100을 넣어줌 >> 변수 a.
}

void main()
{
    int a;

    func1(); // void 형 함수를 호출

    a = func2(); // int 형 함수를 호출
    printf("int 형 함수에서 돌려준 값 ==> %d\n", a);
}