#include <stdio.h> // 직접 커피를 서비스하는 과정의 예(+함수를 사용해 변경)
 
int coffee_machine(int button) // 커피 자판기 함수를 구현
{
    printf("\n#1. (자동으로) 뜨거운 물을 준비한다\n");
    printf("#2. (자동으로) 종이컵을 준비한다\n");

    switch(button)
    {
        case 1: printf("#3. (자동으로) 보통커피를 탄다\n"); break;
        case 2: printf("#3. (자동으로) 설탕커피를 탄다\n"); break;
        case 3: printf("#3. (자동으로) 블랙커피를 탄다\n"); break;
        default: printf("#3. (자동으로) 아무거나 탄다\n"); break;
    }

    printf("#4. (자동으로) 물을 붓는다\n");
    printf("#5. (자동으로) 스푼으로 저어서 녹인다\n\n");

    return 0; // 30행으로 돌아간다.
}

void main()
{
    int coffee; // 커피 종류 변수 선언
    int ret; // 반환값 변수 선언

    printf("어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
    scanf("%d", &coffee);

    ret = coffee_machine(coffee); // 커피 자판기 버튼 누르기(함수 호출)

    printf("손님~ 커피 여기 있습니다.\n\n");
}