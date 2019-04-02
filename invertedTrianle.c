/*
역삼각형 출력
*/

#include <stdio.h>

int main() {
 int n,t,j;
 scanf_s("%d", &n);
 if (n % 2 == 0)
  n++;

 for (int i = n; i >0; i-=2) {
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
