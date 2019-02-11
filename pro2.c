//숫자 맞추기 게임
#include <stdlib.h>
#include <stdio.h>

#pragma warning(disable:4996)

int main() {
	int n,i,corrAns;
	corrAns = rand() % 100; //숫자 랜덤

	for (i = 0; i < 10; i++) {
		printf("\n정답을 추측하여보시오: ");
		scanf_s("%d", &n);
		if (corrAns == n) {
			printf("\nYOU WIN! 시도횟수=%d", i);
			return 0;
		}
		else if (corrAns > n) {
			printf("제시한 정수가 낮습니다. ");
		}
		else {
			printf("제시한 정수가 높습니다. ");
		}
	}

	printf("\n\n시도횟수 10번 모두 사용하셨습니다.\n 정답=%d", corrAns);
	return 0;
}
