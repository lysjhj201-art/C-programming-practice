#include <stdio.h>  // 함수를 이용한 대, 소문자 변환 프로그램

char upper(char ch)  // 대문자로 변환하는 함수
{
    return ch - ('a' - 'A');
}

char lower(char ch)  // 소문자로 변환하는 함수
{
    return ch + ('a' - 'A');
}

void main()
{
    char in[100], out[100];
    char ch;
    int i = 0;

    printf("문자열을 입력(100자 이내: )");
    scanf("%s", in);  // 문자열 입력 받기

    do{               // 문자열이 널이 아닌 동안 반복한다. 즉 문자열의 끝까지 반복한다.
        ch = in[i];   // 문자열 배열에서 한 문자만 추출한다.
        if(ch >= 'A' && ch <= 'Z')  // 만약 문자가 대문자면 lower() 함수, 
            out[i] = lower(ch);
        else if(ch >= 'a' && ch <= 'z')  // 소문자면 upper() 함수를 호출한다.
            out[i] = upper(ch);
        else
            out[i] = ch;
        i++;
    }
    while(ch != '\0');

    out[i] = '\0';
    printf("변환된 결과 ==> %s\n", out);
}