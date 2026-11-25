#include <stdio.h>
#include <string.h>

void main()
{
    char ss[100];  // 입력받을 문자 배열 선언
    char *p;
    int count, i;

    printf("문자열을 입력하세요: ");
    scanf("%s", ss);  // 문자열 입력

    count = strlen(ss);  // 입력한 문자열의 개수를 count에 넣음

    p = ss;  // 배열 ss의 주소를 포인터 변수 p에 대입

    printf("내용을 거꾸로 출력: ");
    for(i=0; i<count; i++)  // 포인터 p에 있는 실제 값을 문자열의 맨뒤부터 출력
    {
        printf("%c", *(p+count-(i+1)));  // p는 ss의 첫값. p+count를 하면 \0(널값)으로 이동함. 널값 건너뛰도록 i+1을 함.
    }
    printf("\n");
}