#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;

int isEmpty(void) {
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull(void) {
    if (top == MAX-1)
        return 1;
    else
        return 0;
}

void push(int item) {
    printf("push(%d)\n", item);

    if (isFull()) {
        printf("스택 상태: 꽉 차있음\n");
        return;
    }

    top = top + 1;
    stack[top] = item;
}

int pop(void) {
    int value;

    if (isEmpty()) {
        printf("스택 상태: 비어 있음");
        return;
    }

    value = stack[top];
    top = top - 1;
    return value;
}

int peek(void) {
    printf("peek()\n");

    return stack[top];
}

void printStack(void) {
    int i;

    if (isEmpty()) {
        printf("스택 상태: (비어 있음)\n");
        return;
    }

    printf("스택 상태: ");
    for (i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(void) {
    int value;

    push(10);   printStack();
    push(20);   printStack();
    push(30);   printStack();

    value = pop();
    printf("pop()\n");
    printf("%d이 삭제되었습니다. \n", value);
    printStack();

    push(40);   printStack();


    value = peek();
    printf("현재 top 값: %d\n", value);
    printStack();

    return 0;
}