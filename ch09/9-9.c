#include <stdio.h>  // 문자형 배열에 입력된 문자를 반대 순서로 출력

void main()
{
    char s[8] = "Basic-C";
    char *p;
    int i;

    p = s;  // 포인터 변수에 배열 주소를 대입

    for(i=sizeof(s)-2; i>=0; i--)  // 문자형 배열의 끝부터 배열의 개수만큼 반복. sizeof(s) = 8, 7는 널값이므로 6부터 시작해야 C부터 거꾸로 출력 가능. 
        printf("%c", *(p+i));      // 포인터 변수가 가리키는 곳의 문자 하나 출력(을 for문이 반복). 6, 5, 4, 3, 2, 1, 0: 7번 반복

    printf("\n");
}