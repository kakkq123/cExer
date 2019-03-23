#include <stdio.h>
/*
좌표 평면에서 네 점의 좌표를 연결하여 직사각형을 만들려한다.
세 점의 좌표가 주어졌을 때, 사각형을 완성하기 위한 마지막 좌표를 구하여라.
*/
int main() {
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;

	scanf_s("%d %d", &x1, &y1);
	scanf_s("%d %d", &x2, &y2);
	scanf_s("%d %d", &x3, &y3);

	//x좌표
	if (x1 == x2)
		x4 = x3;
	else {
		if (x1 == x3)
			x4 = x2;
		else
			x4 = x1;
	
	}

	//y좌표
	if (y1 == y2)
		y4 = y3;
	else {
		if (y1 == y3)
			y4 = y2;
		else 
			y4 = y1;

	}

	//출력
	printf("%d %d", x4, y4);


	return 0;

}
