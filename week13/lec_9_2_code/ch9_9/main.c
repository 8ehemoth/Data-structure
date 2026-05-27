#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void heapSort(int a[], int n);
void makeHeap(int a[], int root, int n);

void printArray(int a[], int n) {
    int i;

    for (i = 0; i < n; i++)
        printf("%4d", a[i]);

    printf("\n");
}

int main(void) {

    int list[] = { 69, 10, 30, 2, 16, 8, 31, 22 };
    int size = sizeof(list) / sizeof(list[0]);

    printf("정렬 전 데이터\n");
    printArray(list, size);

    printf("\n<<<< 히프 정렬 수행 >>>>\n");

    heapSort(list, size);

    printf("\n정렬 후 데이터\n");
    printArray(list, size);

    return 0;
}

void heapSort(int a[], int n) {

    int i, temp;

    // 초기 최대 히프 생성
    for (i = n / 2 - 1; i >= 0; i--) {
        makeHeap(a, i, n);
    }

    printf("\n최대 히프 생성\n");
    printArray(a, n);

    // 히프 정렬 수행
    for (i = n - 1; i > 0; i--) {

        // 루트(최대값)와 마지막 원소 교환
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        // 히프 재구성
        makeHeap(a, 0, i);

        printf("정렬 과정 : ");
        printArray(a, n);
    }
}

void makeHeap(int a[], int root, int n) {

    int parent, child;
    int temp;

    parent = root;
    temp = a[parent];

    child = parent * 2 + 1;

    while (child < n) {

        // 오른쪽 자식이 더 크면 선택
        if (child + 1 < n && a[child] < a[child + 1]) {
            child++;
        }

        // 부모가 더 크면 종료
        if (temp >= a[child]) {
            break;
        }

        // 자식을 부모 위치로 올림
        a[parent] = a[child];

        parent = child;
        child = parent * 2 + 1;
    }

    a[parent] = temp;
}