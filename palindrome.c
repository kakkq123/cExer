/*
���� ȸ�� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int main() {
	char *number = malloc(sizeof(char)*SIZE);
	scanf("%s", number);

	int len = strlen(number);
	char * reNum = malloc(sizeof(char)*len);

	//������ ������
	for (int i = 0; i < len; i++)
		reNum[i] = number[len - 1 - i];

	//���� ȸ������ Ȯ��
	for (int i = 0; i < len; i++) {
		if (reNum[i] != number[i]) { //�ٸ� ���� �ϳ��� ������ ���� ȸ�� �ƴ�
			printf("No");
			exit(1);
		}

	}
	printf("Yes");




	free(number);
	free(reNum);
	return 0;
}