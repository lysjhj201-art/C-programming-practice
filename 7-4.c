#include <stdio.h> // while문 무한루프를 사용해 반복된 계산

int main()
{
    int a, b;
    char ch;

    while(1)
    {
        printf("계산할 두 수를 입력(중지 Ctrl+C): ");
        scanf("%d %d", &a,&b);

        printf("계산할 연산자를 입력: ");
        scanf(" %c", &ch);

        switch(ch)
        {
            case '+':
                printf("%d + %d = %d\n", a, b, a+b);
                break;
            case '-':
                printf("%d - %d = %d\n", a, b, a-b);
                break;
            case '*':
                printf("%d * %d = %d\n", a, b, a*b);
                break;
            case '/':
                printf("%d / %d = %f\n", a, b, a/(float)b);
                break;
            case '%':
                printf("%d %% %d = %d\n", a, b, a%b);
                break;
            default:
                printf("연산자를 잘못입력하셨습니다.\n");
        }
    }
    return 0;
}