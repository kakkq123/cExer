/*
정수 n을 입력받아
이진수로 변환하고
1의 개수 출력
*/

#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 200


int main() {
	int n, temp, pos = 0, numOf1 = 0;
	int binary[SIZE];
	int bin[SIZE];

	printf("양의 정수 입력하세요: ");
	scanf("%d", &n);

	int q = n / 2;
	int r = n % 2;
	binary[pos] = r;
	while (1) {
		temp = q / 2;
		r = q % 2;
		q = temp;
		binary[++pos] = r;
		if (q == 1) {
			binary[++pos] = 1;
			break;
		}
	}
	//역순으로 배열 저장
	for (int j = pos; j >= 0; j--)
		bin[j] = binary[pos - j];

	//1의 개수 저장
	for (int j = 0; j <= pos; j++) {
		if (bin[j] == 1)
			numOf1++;
	}
	
	printf("이진수로 변환: ");
	for(int i=0; i<=pos; i++)
		printf("%d",bin[i]);
	printf("\n1의 개수 : %d", numOf1);


	return 0;
}