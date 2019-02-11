//소수 판별

#include <stdio.h>


int main() {
	int n,i;
	scanf_s("%d", &n);
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("입력한 수는 소수가 아닙니다.\n");
			return 0;
		}
	}
	printf("입력한 수는 소수입니다.\n");
	return 0;
}
