#include <stdio.h>


int main(void) {
	int n;
	double m;
	int min, temp;
	scanf_s("%d", &n);

	int * num = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) 
		scanf_s("%d", &num[i]);
	
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (num[j] < num[min])
				min = j;
			temp = num[i];
			num[i] = num[min];
			num[min] = temp;
		}
	}
	m = (double)(num[0] + num[1])/2;
	for (int i = 2; i < n; i++) {
		m = (double)(m + num[i]) / 2;
	}

	printf("%.6lf", m);



	return 0;
}
