#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100
#define POSTFIXSIZE 100

int stack[MAXSTACK];
int top = -1;

void push(int item) {
	if (top >= MAXSTACK - 1)
		printf("Stack Overflow\n");
	else
		stack[++top] = item;
}

int pop() {
	if (top < 0)
		printf("Stack Underflow\n");
	else
		return stack[top--];
}

void evalPostfix(char postfix[]) {
	int i, val, A, B;
	char ch;

	for (i = 0; postfix[i] != ')'; i++) {
		ch = postfix[i];

		if (isdigit(ch)) {
			val = ch - '0';
			push(val);
		} else {
			B = pop();
			A = pop();
			switch (ch) {
				case '+': val = A + B; break;
				case '-': val = A - B; break;
				case '*': val = A * B; break;
				case '/': val = A / B; break;
			}
			push(val);
		}
	}
	printf("Result = %d\n", pop());
}

int main() {
	char postfix[POSTFIXSIZE];
	int i;

	printf("Enter postfix expression, press ')' to end:\n");
	for (i = 0; i < POSTFIXSIZE - 1; i++) {
		scanf(" %c", &postfix[i]);
		if (postfix[i] == ')')
			break;
	}

	evalPostfix(postfix);
	return 0;
}
