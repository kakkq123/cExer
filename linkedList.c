#include <stdio.h>

struct _node{
	int key;
	struct _node *next;
};

typedef struct _node node_t;

node_t *head = NULL;
node_t *tail = NULL;

void insertNode(int n) {
	
	node_t *new_node = (node_t*)malloc(sizeof(node_t));
	new_node->key = n;
	new_node->next = NULL;

	if (head == NULL) {
		head = new_node;
		tail = new_node;
		printf("[%d]\n", tail->key);
	}
	else {
		tail->next = new_node;
		tail = new_node;
		printf("[%d]\n", tail->key);
	}

}

void deleteNode() {
	if (tail == NULL) {
		printf("empty!\n");
		return 0;
	}
	else if (head == tail) {
		printf("Last value: [%d]\n",head->key);
		head = NULL;
		tail = NULL;
	}
	else {
		printf("[%d]\n", head->key);
		head = head->next;
	}	
}


int main() {
	int num;
	while (1) {
		printf("input number: ");
		scanf_s("%d", &num);

		if (num > 0)
			insertNode(num);
		else if (num == 0)
			deleteNode();
		else
			break;
	
	}
	
	printf("\n프로그램 종료\n");
	
	return 0;
}
