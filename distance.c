/*
����ü�� ����Ͽ�
�� �� ������ �Ÿ��� ���ϴ� ���α׷�
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
	printf("ù ��° ���� ��ǥ(x,y)�� �Է��Ͻÿ�: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("�� ��° ���� ��ǥ(x,y)�� �Է��Ͻÿ�: ");
	scanf("%d %d", &p2.x, &p2.y);

	double res = sqrt(pow(abs(p1.x - p2.x), 2) + pow(abs(p1.y - p2.y), 2));
	printf("�� �� ������ �Ÿ��� %.2lf�Դϴ�", res);


}