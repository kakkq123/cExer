#include <stdio.h>
//03.배열회전
void right_rotate(int arr[], int s, int t) {
	int temp, j;
	temp = arr[t]; // t번째 값을 temp 변수에 저장
	//s+1번째에서 t번째까지 한 칸씩 이동하여 저장
	for (j = t; j > s; j--)
		arr[j] = arr[j - 1];

	arr[s] = temp; //t번째 값을 배열 s번째에 저장한다
}
int main() {
	int s, t,i;
	int array[8] = {1,2,3,4,5,6,7,8};

	for (i = 0; i < 8; i++)
		printf("%d\t", array[i]);

	printf("\n");

	//s와 t를 입력 받음
	scanf_s("%d", &s);
	scanf_s("%d", &t);

	right_rotate(array, s, t);
	
	for (i = 0; i < 8; i++)
		printf("%d\t", array[i]);

	return 0;
}
