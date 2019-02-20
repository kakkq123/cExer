#include <stdio.h>
#define STACK_CAPACITY 8

int stackArray[STACK_CAPACITY];
int head = -1;
int stackSize = 0;

void enstack(int n) {
	if (stackSize == STACK_CAPACITY) {
		printf("stack full!\n");
		return 0;
	}
	head++;
	stackArray[head] = n;
	stackSize++;
	printf("[%d]\n", stackArray[head]);
	return 0;
}
void destack() {
	if (stackSize == 0) {
		printf("stack empty!\n");
		return 0;
	}
	printf("[%d]\n", stackArray[head]);
	head--;
	stackSize--;
	return 0;
}


int main() {
	int num;
	while(1){
		printf("input number: ");
		scanf_s("%d", &num);

		if (num > 0)
			enstack(num);
		else if (num == 0)
			destack();
		else
			break;
		
	}
	
	return 0;
}
