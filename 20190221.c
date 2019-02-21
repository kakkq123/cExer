#include <stdio.h>
//이항계수_재귀함수사용
double choose(double n, double r) {
	if (n == r || r == 0)
		return 1;
	return choose(n - 1, r - 1) + choose(n - 1, r);
}

int main() {
	double n, r,result;
	printf("input n,r: ");
	scanf_s("%lf %lf", &n,&r);
	//scanf_s("%lf", &r);

	result=choose(n, r);

	printf("\n%0.lf",result);

	return 0;
}
