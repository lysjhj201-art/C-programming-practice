#include <stdio.h>  // 함수를 이용한 구구단 프로그램

void gugu(int dan)
{
    int i;

    for(i=1; i<=9; i++)
    {
        printf("%2d X %2d = %2d\n", dan, i, dan*i);
    }
}

void main()
{
    int input;

    printf("출력하고 싶은 단을 입력: ");
    scanf("%d", &input);

    gugu(input);  // input의 값이 3열 dan 매개변수에 복사돼서 들어감.
}
