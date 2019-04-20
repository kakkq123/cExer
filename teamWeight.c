/*
각 팀의 몸무게 총합을 구하는 프로그램
모든 학생들은 한 팀에 참여해야 하며
두 팀의 참가 학생수 차이는 1이 넘어가서는 안 된다.
팀 전체 체중 차이가 가장 적도록 팀을 구성해야한다.
몸무게 합이 적은 순으로 팀을 출력한다.
*/
#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, min, temp;
	int team1 = 0, team2 = 0;
	printf("학생 수를 입력하세요: ");
	scanf("%d", &n);
	int * weight = (int*)malloc(sizeof(int)*n);

	printf("학생들의 몸무게를 입력하세요: \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &weight[i]);
	}


	//오름차순 정렬
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (weight[j] > weight[j + 1]) {
				temp = weight[j];
				weight[j] = weight[j + 1];
				weight[j + 1] = temp;
			}
		}
	}

	//팀 나누기
	int i = 0;
	if (n % 2 == 0) { //n이 짝수라면
		while (i < n / 2) {
			team1 += weight[i] + weight[n - i - 1];
			team2 += weight[i + 1] + weight[n - i - 2];
			i += 2;
		}
	}
	else {//n이 홀수라면
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