/*
�ݺ� Ƚ�� n�� �Է� �޾� PI�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
*/

#include <stdio.h>


int main() {
	int n;
	double pi = 0;
	while (1) {
		printf("�ݺ� Ƚ�� �Է��ϼ���(���� -1): ");
		scanf_s("%d", &n);
		if (n == -1)//-1�� �Է� ������ ����
			exit(1);
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) { //i��°�� Ȧ�����
				pi += (double)4 / (2 * i - 1);
			}
			else {
				pi -= (double)4 / (2 * i - 1);

			}
		}
		printf("%lf\n", pi);
		pi = 0; //�ʱ�ȭ
	}
	return 0;
}