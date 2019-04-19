/*
n보다 작은
(1+2+3+.....k)의 값
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, temp;
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &n);

	int num = 0, i = 1;

	while (num < n) {
		temp = num;
		num += i;
		if (num >= n) {
			num = temp;
			i--;
			break;
		}
		i++;

	}
	printf("1부터 %d까지의 합이 %d입니다.", i, num);

	return 0;
}