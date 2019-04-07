#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)


int main() {

	int n,sum=0;
	printf("정수 n을 입력하세요: ");
	scanf("%d", &n);

	int * num = (int *)malloc(sizeof(int)*n);

	//n개의 개수만큼 정수 입력 받음
	printf("정수 %d개를 입력하세요,\n",n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	//홀수만 계산
	for (int i = 0; i < n; i++) {
		if (num[i] % 2 == 1)
			sum += num[i];

	}
	
	printf("홀수들의 합: %d\n\n", sum);
	free(num);
	return 0;
}