
/*
2*n 크기의 타일이 있을 때
1*2타일과 2*1타일을 가지고 채울 수 있는 총 타일의 개수
*/

#include <stdio.h>

#define SIZE 1000
int num[SIZE];

int minNumOfTiles(int n) {
	if (n == 1)
		return  1;
	if (n == 2)
		return 2;
	if (num[n] != 0)
		return num[n];
	return num[n] = minNumOfTiles(n - 1) + minNumOfTiles(n- 2);
}

int main() {

	int n;
	scanf_s("%d", &n);

	printf("%d\n\n", minNumOfTiles(n));


	return 0;
}
