#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

// push 함수
void push(char c) {
    top = top + 1;
    stack[top] = c;
}


// pop 함수
char pop() {
	int value;
    value = stack[top];
    top = top - 1;
    return value;
}



int main() {
    char str[MAX_SIZE];

    printf("문자열 입력: ");
    scanf("%s", str);

    int len = strlen(str);

    // 1. 문자열 push
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    // 2. pop 하면서 출력
    while (top != -1) {
        char value = pop();
        printf("%c", value);
    }
        
    getchar(); getchar();

    return 0;
}