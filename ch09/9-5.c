#include <stdio.h>  // &aa[i]와 aa+i 의 메모리 할당

void main()
{
    int aa[3] = {10, 20, 30};

    printf("&aa[0]은 %d, aa+0은 %d\n", &aa[0], aa+0);
    printf("&aa[1]은 %d, aa+1은 %d\n", &aa[1], aa+1);
    printf("&aa[2]은 %d, aa+2은 %d\n", &aa[2], aa+2);
}