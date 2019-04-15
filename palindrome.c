/*
숫자 회문 여부
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

	//역으로 저장함
	for (int i = 0; i < len; i++)
		reNum[i] = number[len - 1 - i];

	//숫자 회문인지 확인
	for (int i = 0; i < len; i++) {
		if (reNum[i] != number[i]) { //다른 숫자 하나라도 있으면 숫자 회문 아님
			printf("No");
			exit(1);
		}

	}
	printf("Yes");




	free(number);
	free(reNum);
	return 0;
}