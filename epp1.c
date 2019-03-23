#include <stdio.h>
/*
n개의 정수를 입력 받아
a번 째 수부터 b번 째 수까지 합을 구하는 프로그램
*/
int main() {
	int n, start, end;
	int res = 0;
	scanf_s("%d", &n);
	scanf_s("%d %d", &start, &end);
	
	int * p = (int*)malloc(sizeof(int)*n);

	for(int i=0; i<n; i++)
		scanf_s("%d", &p[i]);

	for (int i = start-1; i < end; i++)
		res += p[i];

	printf("\n\n%d", res);
	return 0;

}
