/*
�л��� �̸��� ������ �Է� �޾�
�л� ���� ������������ �����Ͽ� ���

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[20];
	int score;
};

typedef struct student s;

int main() {
	int n, i, j;
	printf("�л����� �Է��ϼ��� ");
	scanf("%d", &n);

	s *st = (s*)malloc(sizeof(s)*n);
	printf("�л��� �̸��� ����(����)�� �Է��ϼ��� : \n");
	for (int i = 0; i < n; i++) {
		scanf("%s %d", &st[i].name, &st[i].score);
	}

	s temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (st[j].score < st[i].score) {
				temp = st[j];
				st[j] = st[i];
				st[i] = temp;
			}
		}
	}

	//���
	printf("\n���� ������������ ������ ���\n");
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", st[i].name, st[i].score);
	}
	free(st);
	return 0;
}