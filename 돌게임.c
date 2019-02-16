#include <stdio.h>

#pragma warning(disable:4996)

int main() {
	int n = 0;
	int num;
	scanf_s("%d", &num);
	
	while (num != 0) {
		n++;
		if (num >= 3)
			num -= 3;
		else
			num -= 1;
	
	}
	if (n % 2 == 0)
		printf("CY");
	else
		printf("SK");

	return 0;
}
