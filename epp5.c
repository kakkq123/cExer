//홀수 다이아몬드 그리기

#include <stdio.h>

int main() {
	int n, i,j,a=1;
	scanf_s("%d", &n); //홀수 입력
	
	int mid = (n + 1) / 2;
	//다이아몬드 그리기

	while(a<=n){
		if (a <= mid) {
			for (i = n - 1; i >= 0; i -= 2) {
				int k = i / 2;
				for (j = 0; j < k; j++)
					printf(" ");
				for (j = 0; j < n - i; j++)
					printf("*");
				for (j = 0; j < k; j++)
					printf(" ");
				printf("\n");
				a++;
			}
		}
		else {
			int k = a - mid;
			for(j=0;j<k;j++)
				printf(" ");
			for (j = 0; j < n - k*2; j++)
				printf("*");
			for (int j = 0; j < k; j++)
				printf(" ");
			printf("\n");
			a++;
		}

	}


	return 0;
}
