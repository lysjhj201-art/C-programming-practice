#include <stdio.h>  // 스택 구현 예2

void main()
{
    char stack[5];
    int top = 0;

    char carName = 'A';  // 자동차 이름을 A부터 시작한다.
    int select = 9;  // 사용자가 선택할 작업을 입력할 변수이다.

    while(select !=3) // 사용자가 3을 선택하지 않을 때까지 while문 반복
    {
        printf("<1>자동차 넣기 <2>자동차 빼기 <3>끝: ");
        scanf("%d", &select);

        switch(select)
        {
            case 1:          // 자동차 넣기
                if(top >=5)  // 터널에 자동차가 5대가 있으면 못 들어간다.
                {
                    printf("터널이 꽉 차서 못 들어감\n");
                }
                else         // 빈 곳이 있을 경우(5대 미만이면)
                {
                    stack[top] = carName++;  // 자동차를 넣고
                    printf("%c 자동차가 터널에 들어감\n", stack[top]);
                    top++;   // top 값을 1 증가시킨다.
                }
                break;
            case 2:          // 자동차 빼기
                if(top <= 0)
                {
                    printf("빠져나갈 자동차가 없음\n");
                }
                else
                {
                    top--;  // 빼낼 자동차가 있으면 top 값을 1 감소시켜 자동차를 빼낸다.
                    printf("%c 자동차가 터널에서 빠짐", stack[top]);
                    stack[top] = ' ';  // 빼낸 자리를 빈칸으로 채운다.
                }
                break;

            case 3:          // 끝
                printf("현재 터널에 %d대가 있음\n", top);
                printf("프로그램을 종료합니다.\n");
                break;

            default:
                printf("잘못 입력했습니다. 다시 입력하세요.\n");
        }
    }
}
