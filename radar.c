/*
레이더로부터 감지할 수 있는 적함대의 개수
*/

#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int main() {
	int cx, cy, attack;
	double r;
	int res = 0;

	printf("레이더 x,y좌표와 반지름 r을 입력하세요: \n");
	scanf("%d %d %lf", &cx, &cy, &r);

	printf("\n적함대의 개수를 입력하세요: ");
	scanf("%d", &attack);

	int * x = (int *)malloc(sizeof(int)*attack);
	int * y = (int *)malloc(sizeof(int)*attack);

	printf("\n차례대로 %d개의 적함대 위치(x,y)를 입력하세요\n",attack);
	//적함대 위치 받기
	for (int i = 0; i < attack; i++) {
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
	}

	//레이더망에 들어오는지 검사
	double range;
	double n, m;
	for (int i = 0; i < attack; i++) {
		n = (double)abs(x[i] - cx);
		m = (double)abs(y[i] - cy);
		range = sqrt(pow(n, 2) + pow(m, 2)); // 두 점 사이 거리 구하기

		//반지름 반경 안에 있는지 확인
		if (range <= r)
			res++;
	}

	printf("\n\n레이더망에 들어오는 적함대의 개수는 %d개 입니다.", res);

	return 0;
}