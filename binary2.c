/*
���� n�� �Է¹޾�
�������� ��ȯ�� ��
1�� ���� ���
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n,r, temp, pos = 0, numOf1 = 0;
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &n);

	int q = n;

	while (1) {
		temp = q / 2;
		r = q % 2;
		if (r == 1)
			numOf1++; //  1�� ���� ���
		q = temp;

		if (q == 1) {
			numOf1++; //  1�� ���� ���
			break;
		}
		
	}

	
	printf("\n1�� ���� : %d", numOf1);


	return 0;
}

