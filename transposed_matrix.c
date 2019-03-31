/*
전치행렬 구하기
*/

#include <stdio.h>

int main() {
 int row, col,temp;

 scanf_s("%d %d", &row, &col);

 int ** a = (int **)malloc(sizeof(int)*row);
 for(int i=0l; i<row; i++)
  a[i]=(int *)malloc(sizeof(int)*col);

 int ** at = (int **)malloc(sizeof(int)*row);
 for (int i = 0l; i < row; i++)
  at[i] = (int *)malloc(sizeof(int)*col);

   // 입력
   for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     scanf_s("%d",&a[i][j]);
    }
   }
   // 전치행렬 출력~
   for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     at[i][j] = a[j][i];
     printf("%d", at[i][j]);
    }
    printf("\n");
   }


 return 0;
}
