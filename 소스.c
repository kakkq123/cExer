#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)


int main() {

	int n,sum=0;
	printf("���� n�� �Է��ϼ���: ");
	scanf("%d", &n);

	int * num = (int *)malloc(sizeof(int)*n);

	//n���� ������ŭ ���� �Է� ����
	printf("���� %d���� �Է��ϼ���,\n",n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	//Ȧ���� ���
	for (int i = 0; i < n; i++) {
		if (num[i] % 2 == 1)
			sum += num[i];

	}
	
	printf("Ȧ������ ��: %d\n\n", sum);
	free(num);
	return 0;
}