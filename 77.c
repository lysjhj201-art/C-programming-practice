#include <stdio.h>  // 입력한 두 수 사이의 홀수를 구하는 코드

void main()
{
   int start, end, tmp, i;

   printf("시작값 ==> ");
   scanf("%d", &start);
   printf("끝값 ==> ");
   scanf("%d", &end);

   if(start > end) {       // 시작값이 더 크면 두 값을 바꾼다
      tmp = start;
      start = end;
      end = tmp;
   }

   i = start;
   while(i <= end) {
      if(i % 2 == 1)       // 홀수만 출력
         printf("%d ", i);
      i++;
   }
   printf("\n");
}