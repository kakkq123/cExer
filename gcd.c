#include <stdio.h>
 //최대공약수 구하기
int main() {
	int r, r1, r2;
	printf("숫자 2개 입력하세요:");
	scanf_s("%d %d", &r1, &r2);

	while (r2 != 0) {
		r = r1 % r2;
		r1 = r2;
		r2 = r;	
	}

	printf("\n최대공약수 : %d \n", r1);



	return 0;

}
