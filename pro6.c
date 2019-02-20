//은행번호 대기 관리 _배열로 큐 작성

#include <stdio.h>
#define QUEUE_CAPACITY 8

int queueArray[QUEUE_CAPACITY];
int head = -1, tail = 0;
int queueSize = 0;

void enqueue(int n) {
	if (queueSize == QUEUE_CAPACITY) {
		printf("queue full!\n");
		return 0;
	}
	queueArray[tail] = n;
	printf("[%d]\n", queueArray[tail]);
	tail++;
	queueSize++;
	
	return 0;
}
void dequeue() {
	if (queueSize == 0) {
		printf("queue empty!\n");
		return 0;
	}
	head++;
	queueSize--;
	printf("[%d]\n", queueArray[head]);
	return 0;
}


int main() {
	int num;
	while(1){
		printf("input number: ");
		scanf_s("%d", &num);

		if (num > 0)
			enqueue(num);
		else if (num == 0)
			dequeue();
		else
			break;
		
	}
	
	return 0;
}
