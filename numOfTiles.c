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
	return num[n] = (minNumOfTiles(n - 1) + minNumOfTiles(n- 2))%10007;
}

int main() {

	int n;
	scanf_s("%d", &n);

	printf("%d\n\n", minNumOfTiles(n));


	return 0;
}
