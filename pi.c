/*
반복 횟수 n을 입력 받아 PI를 계산하는 프로그램을 작성하시오
*/

#include <stdio.h>


int main() {
	int n;
	double pi = 0;
	while (1) {
		printf("반복 횟수 입력하세요(종료 -1): ");
		scanf_s("%d", &n);
		if (n == -1)//-1을 입력 받으면 종료
			exit(1);
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) { //i번째가 홀수라면
				pi += (double)4 / (2 * i - 1);
			}
			else {
				pi -= (double)4 / (2 * i - 1);

			}
		}
		printf("%lf\n", pi);
		pi = 0; //초기화
	}
	return 0;
}