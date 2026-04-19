#include <stdio.h>
#include <stdlib.h>

// 구조체 선언
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// top 노드 선언
Node* top = NULL;

// push
void push(int item) {
    printf("push(%d)", item);

    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = item;
    newNode->next = top;
    top = newNode;
}

// pop
int pop(void) {
    int value;

    if (top == NULL) {
        printf("스택 상태: 비어 있음");
        return;
    }

    Node* temp = top;
    value = temp->data;

    top = top->next;
    free(temp);

    return value;

}

// peek
int peek(void) {
    printf("pee()");

    if (top == NULL) {
        printf("스택 상태: 비어 있음");
        return;
    }

    int value;
    value = top->data;
    return value;
}


// 스택 상태 출력
void printStack(void) {
    Node* temp = top;

    if (temp == NULL) {
        printf("스택 상태: (비어 있음)\n");
        return;
    }

    printf("스택 상태: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
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