#include <stdio.h>

int main() {
	int day,n, bus, num=0;

	scanf_s("%d", &day);
	scanf_s("%d", &n); 
	int busNum1 = day % 5;
	int busNum2 =(day+5)%10;

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &bus);
		if ((bus%5) == busNum1 || (bus+5)%10 == busNum1|| (bus % 5) == busNum2 || (bus + 5) % 10 == busNum2)
			num++;
	
	}
	printf("%d", num);
	return 0;

}
