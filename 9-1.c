#include <stdio.h> // 스택 구현 예1

void main()
{
    int stack[5];  // 스택 선언
    int top = 0;  // top의 초깃값 선언

    stack[top] = 'A';
    printf("%c 자동차가 터널에 들어감\n", stack[top]);
    top++;  // 스택에 값이 들어간 후 top 값이 1 증가

    stack[top] = 'B';
    printf("%c 자동차가 터널에 들어감\n", stack[top]);
    top++; 

    stack[top] = 'C';
    printf("%c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    printf("\n");

    top--; // top 값을 1씩 줄이면서 값을 하나씩 빼낸다.
    printf("%c 자동차가 터널을 빠져나감\n", stack[top]);
    stack[top] = ' ';  // '' 사이에 빈칸을 넣으면 빼내는 효과. 가장 최근에 c가 들어갔으므로 c가 빠짐

    top--; 
    printf("%c 자동차가 터널을 빠져나감\n", stack[top]);
    stack[top] = ' ';

    top--;
    printf("%c 자동차가 터널을 빠져나감\n", stack[top]);
    stack[top] = ' ';
}