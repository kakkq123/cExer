/*
화씨온도를 섭씨온도로 변환
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	double s;
	printf("화씨온도를 입력하세요 : ");
	scanf("%d", &n);
	s =(double) 5 / 9 * (n - 32);
	printf("섭시온도는 %.2lf 입니다. ",s);
	return 0;
}
