/*
구조체를 사용하여
두 점 사이의 거리를 구하는 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 
struct pos {
	int x;
	int y;
};
typedef struct pos p;

int main() {
	p p1, p2;
	printf("첫 번째 점의 좌표(x,y)를 입력하시오: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("두 번째 점의 좌표(x,y)를 입력하시오: ");
	scanf("%d %d", &p2.x, &p2.y);

	double res = sqrt(pow(abs(p1.x - p2.x), 2) + pow(abs(p1.y - p2.y), 2));
	printf("두 점 사이의 거리는 %.2lf입니다", res);


}