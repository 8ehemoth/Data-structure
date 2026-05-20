#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int sale;
}Product;

int step = 0;

int partition(Product a[], int begin, int end,
    int size, int order);
void quickSort_new(Product a[], int begin,
    int end, int size, int order);

int main(void) {


    int i;
    int order;

    Product list[5] = { {"새우깡", 120}, {"콜라", 300},
                        {"초코파이", 180}, {"사이다", 250}, {"감자침", 90} };

    int size = sizeof(list) / sizeof(list[0]);

    printf("정렬 전:\n");

    for (i = 0; i < size; i++) {
        printf("%s %d\n",
            list[i].name,
            list[i].sale);
    }

    printf("\n1. 오름차순\n");
    printf("2. 내림차순\n");
    printf("선택 : ");
    
    scanf("%d", &order);

    
    quickSort_new(list, 0, size - 1, size, order);

    printf("\n정렬 후:\n");

    for (i = 0; i < size; i++) {
        printf("%s %d\n",
            list[i].name,
            list[i].sale);
    }

    return 0;
}

int partition(Product a[], int begin, int end,
    int size, int order) {

    int pivot, L, R, t;
    Product temp;

    pivot = (begin+end)/2;
    L = begin;
    R = end;

    printf("\n[%d단계 : pivot = %s(%d)]\n",
        ++step,
        a[pivot].name,
        a[pivot].sale);

    while (L < R) {

        if (order == 1) {

            while ((a[L].sale < a[pivot].sale) && (L < R)) 
                L++;
            while ((a[R].sale >= a[pivot].sale) && (L < R))
                R--;

        }
        else {

            while ((a[L].sale >= a[pivot].sale) && (L < R))
                L++;
            while ((a[R].sale < a[pivot].sale) && (L < R))
                R--;

        }

        if (L < R) {
            temp = a[L];
            a[L] = a[R];
            a[R] = temp;

            // L이 피봇인 경우, 변경된 피봇의 위치(R)을 다시 저장
            //if (L == pivot) pivot = R;
        }

    }

    temp = a[pivot];
    a[pivot] = a[R];
    a[R] = temp;

    printf("현재 상태:\n");

    for (t = 0; t < size; t++) {
        printf("%s %d\n",
            a[t].name,
            a[t].sale);
    }

    return R;
}

void quickSort_new(Product a[], int begin,
    int end, int size, int order) {

    int p;


    if (begin < end) {

        p = partition(a, begin, end,
            size, order);


        quickSort_new(a, begin, p - 1,
            size, order);


        quickSort_new(a, p + 1, end,
        size, order);

    }
}
