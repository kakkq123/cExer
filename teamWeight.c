/*
�� ���� ������ ������ ���ϴ� ���α׷�
��� �л����� �� ���� �����ؾ� �ϸ�
�� ���� ���� �л��� ���̴� 1�� �Ѿ���� �� �ȴ�.
�� ��ü ü�� ���̰� ���� ������ ���� �����ؾ��Ѵ�.
������ ���� ���� ������ ���� ����Ѵ�.
*/
#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, min, temp;
	int team1 = 0, team2 = 0;
	printf("�л� ���� �Է��ϼ���: ");
	scanf("%d", &n);
	int * weight = (int*)malloc(sizeof(int)*n);

	printf("�л����� �����Ը� �Է��ϼ���: \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &weight[i]);
	}


	//�������� ����
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (weight[j] > weight[j + 1]) {
				temp = weight[j];
				weight[j] = weight[j + 1];
				weight[j + 1] = temp;
			}
		}
	}

	//�� ������
	int i = 0;
	if (n % 2 == 0) { //n�� ¦�����
		while (i < n / 2) {
			team1 += weight[i] + weight[n - i - 1];
			team2 += weight[i + 1] + weight[n - i - 2];
			i += 2;
		}
	}
	else {//n�� Ȧ�����
		int mid = n / 2;
		team1 = weight[n - 1];
		for (int j = 0; j < mid - 1; j++)
			team1 += weight[j];
		for (int j = n - 2; j >= mid; j--)
			team2 += weight[j];
		int a = abs(team2 - (team1 + weight[mid - 1]));
		int b = abs(team1 - (team2 + weight[mid - 1]));
		if (a > b)
			team2 += weight[mid - 1];
		else
			team1 += weight[mid - 1];
	}

	

	if (team1 < team2) {
		printf("\n\n%d\n%d", team1, team2);
		return 0;
	}
	printf("\n\n%d\n%d", team2, team1);

	free(weight);
	return 0;
}