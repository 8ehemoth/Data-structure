#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 100

int list[MAX_SIZE] = { 1, 3, 5, 7 };  // 초기값
int size = 4;


// 기본적으로 이정돈 알고있어야 할 것 같다.
// 순차 자료 구조 , 순차 리스트

// 배열 상에서 왔다갔다 할 수 있는가.



// 정렬 유지 삽입 함수
void insertSorted(int value) {
    int i, pos = 0;
    

    // 1. 삽입 위치 찾기 == pos
    for (i = 0; i < size; i++) {
        if (list[i] <= value && value <= list[i + 1]) {
            pos = i + 1;
            break;
        }
    }
    if (i == size) pos = size;
    
    /* 주석으로 된건 교수님 코드
    while (pos < size && list[pos] < value) {
        pos++;
    }
    */



    // 2. 뒤에서부터 밀기
    for (i = value; i > pos; i--) {
        list[i] = list[i - 1];
    }

    /*
    for (i = size; i > pos; i--) {
        list[i] = list[i - 1];
    }
    */



    // 3. 값 삽입
    list[pos] = value;

  

    // 4. 사이즈 증가
    size++;  

    // 만약 value 값이 정수 하나가 아니라 여러 개라면 
    // 이것을 2. 뒤에서부터 밀기 에 size++을 옮겨야할듯
}

// 리스트 출력
void printList() {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int value;

    printf("현재 리스트: ");
    printList();


    printf("삽입할 값 입력: ");
    scanf("%d", &value);

    // insertSorted 함수 사용
    insertSorted(value);

    printf("결과 리스트: ");
    printList();

    getchar(); getchar();

    return 0;
}