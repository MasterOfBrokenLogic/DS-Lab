#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10

struct Stack {
    int s[SIZE];
    int top;
};

struct Stack st;

void initStack();
void push(int item);
void pop();
void display();

void main() {
    int item, ch;
    initStack();
    clrscr();
    do {
        printf("Enter your choice: 1: Push 2: Pop 3: Display 4: Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
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

void initStack() {
    st.top = -1;
}

void push(int item) {
    if (st.top == SIZE - 1) {
        printf("Stack overflow\n");
    } else {
        st.s[++st.top] = item;
    }
}

void pop() {
    if (st.top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped element is: %d\n", st.s[st.top--]);
    }
}

void display() {
    if (st.top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Elements are:\n");
        for (int i = 0; i <= st.top; i++) {
            printf("%d ", st.s[i]);
        }
        printf("\n");
    }
}
