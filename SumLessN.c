/*
n���� ����
(1+2+3+.....k)�� ��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, temp;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	int num = 0, i = 1;

	while (num < n) {
		temp = num;
		num += i;
		if (num >= n) {
			num = temp;
			i--;
			break;
		}
		i++;

	}
	printf("1���� %d������ ���� %d�Դϴ�.", i, num);

	return 0;
}