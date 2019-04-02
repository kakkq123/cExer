/*
피라미드 만들기
*/

#include <stdio.h>

int main() {
 int n,t,j;
 scanf_s("%d", &n);
//만약  n이 짝수라면 홀수로 만들어준다.
 if (n % 2 == 0)
  n++;

 for (int i = 1; i <= n; i+=2) {
  t = (n - i)/2;
  for (j = 0; j < t; j++)
   printf(" ");
  for (j = 0; j < i; j++)
   printf("*");
  for (j = 0; j < t; j++)
   printf(" ");
  printf("\n");


 }


 return 0;
}
