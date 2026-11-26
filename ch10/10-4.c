#include <stdio.h>  // 본격적인 함수 사용 예1

int plus(int v1, int v2)  // plus() 함수를 정의한다. 결과를 hap 변수에 넣어야 하므로 데이터 형식이 같아야 함.
{
    int result;
    result = v1 + v2;  // 3행에서 받은 두 매개변수의 합을 구한다.
    return result;     // plus() 함수를 호출한 곳에 result 값을 반환한다.
}

void main()
{
    int hap; 

    hap = plus(100, 200);  // 매개변수 2개 지정하여 plus() 함수를 호출하고 반환값(result)은 hap에 저장한다.

    printf("100과 200의 plus() 함수 결과는: %d\n", hap);
}