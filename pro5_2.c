#include <stdio.h>
//03.배열회전_k만큼 오른쪽으로 이동

void right_rotate(int arr[], int k, int size_t) {
	int k_th = k%size_t;
	int i;

	int *temp;
	temp = (int *)malloc(sizeof(int)*k_th);
 
	for (i = 0; i < k_th; i++)
		temp[i] = arr[size_t - k_th + i];

	for (i = size_t-1; i > k_th-1; i--)
		arr[i] = arr[i - k_th];

	for (i = 0; i < k_th; i++)
		arr[i] = temp[i];
}
int main() {
	int k,i;
	int array[8] = {1,2,3,4,5,6,7,8};

	for (i = 0; i < 8; i++)
		printf("%d\t", array[i]);

	printf("\n");

	scanf_s("%d", &k);

	right_rotate(array, k, 8);
	
	for (i = 0; i < 8; i++)
		printf("%d\t", array[i]);

	return 0;
}
