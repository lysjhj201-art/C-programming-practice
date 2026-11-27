#include <stdio.h>  // 문자 입출력 함수 사용 예 2
#include <string.h>

void main()
{
    char password[5] = "5678";  // 비밀번호를 '5678'로 고정한다.
    char input[5];              // 입력받은 비밀번호를 저장하는 문자 배열이다.
    int i;

    printf("비밀번호 4글자를 입력하세요: ");
    for(i=0; i < 4; i++)
        input[i] = getchar();

    if(strncmp(password, input, 4) == 0)
    {
        printf("\n비밀번호 통과~~\n");
    }
    else{
        printf("\n입력한 비밀번호 ");
        
        for(i=0; i<4; i++)
            putchar(input[i]);

        printf(" 가 틀렸음\n");
    }

}