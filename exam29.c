#include <stdio.h>  // 숫자 자동 추첨 프로그램
#include <stdlib.h>  // 관련 함수를 사용하기 위해 포함한 헤더 파일
#include <time.h>  // 관련 함수를 사용하기 위해 포함한 헤더 파일

int getNumber()  // 1~45 중에서 숫자 하나를 추출하는 함수이다.
{
    return rand() % 45 + 1;  // rand() 함수는 0~32767 중 하나를 임의로 반환한다.
}

void main()
{
    short int lotto[6] = {0,};  // 추첨된 숫자를 담을 배열이다.
    int i, k, num;              // 반복 변수 i, k, 뽑힌 숫자를 담을 변수 num
    char dup = 'N';             // 이미 뽑힌 숫자인지 체크하기 위한 변수

    printf("** 로또 추첨을 시작합니다. **\n\n");
    srand((unsigned)time(NULL));  // rand() 함수를 초기화하는 함수. 이 행이 없으면 늘 같은 숫자가 뽑힌다.

    for(i=0; i<6;){
        num = getNumber();  // 로또 숫자를 1개 뽑는다.
        
        for(k=0; k<6; k++)  // 다른 숫자가 6개 뽑힐 때까지 반복한다.
            if(lotto[k] == num)
                dup = 'Y';

        if(dup == 'N')  // 뽑은 숫자가 처음 나온 숫자라면 로또 배열에 넣고 i(뽑힌 개수)를 1 증가시킨다. 아니면 다시 중복 확인 변수에 'N'을 대입한다.
            lotto[i++] = num;
        else
            dup = 'N';
    }

    printf("추첨된 로또 번호 ==> ");
    for(i=0; i<6; i++){  // 뽑힌 로또 숫자 6개를 출력한다.
        printf("%d", lotto[i]);
    }

    printf("\n\n");
}
