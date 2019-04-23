/*
정수 n을 입력받아
이진수로 변환할 때
1의 개수 출력
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n,r, temp, pos = 0, numOf1 = 0;
	printf("양의 정수를 입력하세요: ");
	scanf("%d", &n);

	int q = n;

	while (1) {
		temp = q / 2;
		r = q % 2;
		if (r == 1)
			numOf1++; //  1의 개수 계산
		q = temp;

		if (q == 1) {
			numOf1++; //  1의 개수 계산
			break;
		}
		
	}

	
	printf("\n1의 개수 : %d", numOf1);


	return 0;
}

