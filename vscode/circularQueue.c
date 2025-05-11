#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int q[SIZE], front = -1, rear = -1;

void insert(int item) {
	if ((rear == SIZE - 1 && front == 0) || (rear + 1 == front)) {
		printf("Queue overflow\n");
		return;
	}
	if (front == -1) {
		front = 0;
	}
	rear = (rear + 1) % SIZE;
	q[rear] = item;
}
void del() {
	if (front == -1) {
		printf("Queue underflow\n");
		return;
	}
	printf("Deleted element: %d\n", q[front]);
	if (front == rear) {
		front = rear = -1;
	} else {
		front = (front + 1) % SIZE;
	}
}

void display() {
	int position;
	if (front == -1) {
		printf("Queue is empty\n");
	} else {
		printf("Queue after operation:\n");
		if (rear >= front) {
			for (position = front; position <= rear; position++) {
				printf("%d ", q[position]);
			}
		} else {
			for (position = front; position < SIZE; position++) {
				printf("%d ", q[position]);
			}
			for (position = 0; position <= rear; position++) {
				printf("%d ", q[position]);
			}
		}
		printf("\n");
	}
}

	int item, ch;
int main() {
	do {
		printf("Enter your choice:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		scanf("%d", &ch);
		switch (ch) {
			case 1:
				printf("Enter the item: ");
				scanf("%d", &item);
				insert(item);
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid input\n");
		}
	} while (1);
}
