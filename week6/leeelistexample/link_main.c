#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 연결 리스트 예제 리뷰


// 노드 구조체
typedef struct Node {
    int data;
    struct Node* next;     // link 역할
} Node;



// 새 노드 생성
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // 동적 할당 이거 중요하다잉
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}



// 정렬 유지 삽입
Node* listSorted(Node* head, int value) {
    Node* newNode = createNode(value);

    // ★★★★★ 여기 중요 ★★★★★

    int i = 0;
    // 1. 맨앞에 삽입되는 경우
    if (head == NULL || value < head->data) {
        newNode->next = head;
        return newNode;
    }

    // 2. 삽입 위치 찾기
    Node* prev = head;
    Node* cur = head->next;

    while (cur != NULL && cur->data < value) {
        prev = cur;
        cur = cur->next;
    }

    // 3. 삽입
    prev->next = newNode;
    newNode->next = cur;
    
    return newNode;

}




// 출력
void printList(Node* head) {
    Node* cur = head;
    while (cur != NULL) {
        printf("%d -> ", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

int main() {
    // 초기 리스트: 1(head)->3->5->7
    Node* head = createNode(1);             // [1, NULL]
    head->next = createNode(3);             // [1, 3, NULL]
    head->next->next = createNode(5);
    head->next->next->next = createNode(7);


    int value;

    printf("현재 리스트: ");
    printList(head);

    printf("삽입할 값 입력: ");
    scanf("%d", &value);

    // 새로운 노드 삽입하는 함수 사용하기
    listSorted(head, value);

    printf("결과 리스트: ");
    printList(head);

    getchar(); getchar();

    return 0;
}