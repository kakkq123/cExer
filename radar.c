/*
���̴��κ��� ������ �� �ִ� ���Դ��� ����
*/

#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int main() {
	int cx, cy, attack;
	double r;
	int res = 0;

	printf("���̴� x,y��ǥ�� ������ r�� �Է��ϼ���: \n");
	scanf("%d %d %lf", &cx, &cy, &r);

	printf("\n���Դ��� ������ �Է��ϼ���: ");
	scanf("%d", &attack);

	int * x = (int *)malloc(sizeof(int)*attack);
	int * y = (int *)malloc(sizeof(int)*attack);

	printf("\n���ʴ�� %d���� ���Դ� ��ġ(x,y)�� �Է��ϼ���\n",attack);
	//���Դ� ��ġ �ޱ�
	for (int i = 0; i < attack; i++) {
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
	}

	//���̴����� �������� �˻�
	double range;
	double n, m;
	for (int i = 0; i < attack; i++) {
		n = (double)abs(x[i] - cx);
		m = (double)abs(y[i] - cy);
		range = sqrt(pow(n, 2) + pow(m, 2)); // �� �� ���� �Ÿ� ���ϱ�

		//������ �ݰ� �ȿ� �ִ��� Ȯ��
		if (range <= r)
			res++;
	}

	printf("\n\n���̴����� ������ ���Դ��� ������ %d�� �Դϴ�.", res);

	return 0;
}