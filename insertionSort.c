//삽입정렬을 사용하여 오름차순 정렬

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int next,i,j,n;

	printf("배열의 크기를 입력하세요:  ");
	scanf("%d",&n);

	int * array =(int*)malloc(sizeof(int)*n) ;
	
	printf("정수를 입력하세요 :\n");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	//삽입정렬
	for (i = 1; i < n; i++) {
		next = array[i];
		for (j = i - 1; j >= 0 && next<array[j]; j--) {
			array[j+1] = array[j];
		}
		array[j + 1] = next;
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}

	free(array);
	return 0;
}
