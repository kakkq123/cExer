/*
학생의 이름과 점수를 입력 받아
학생 점수 오름차순으로 정렬하여 출력

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
	printf("학생수를 입력하세요 ");
	scanf("%d", &n);

	s *st = (s*)malloc(sizeof(s)*n);
	printf("학생의 이름고 점수(정수)를 입력하세요 : \n");
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

	//출력
	printf("\n점수 오름차순으로 정렬한 결과\n");
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", st[i].name, st[i].score);
	}
	free(st);
	return 0;
}