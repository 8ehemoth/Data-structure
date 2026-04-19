#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n;
    int arr[100];

    printf("n 값을 입력하시오: ");
    scanf("%d", &n);

    printf("%d 개의 정수를 입력하시오.\n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int* p = arr;

    /* 방법 1 */

    int first = *p;
    int second = *(p + 1);

    for (int i = 0; i < n - 2; i++) {
        *(p + i) = *(p + i + 2);
    }

    *(p + n - 2) = first;
    *(p + n - 1) = second;
    
    
    
    ///* 방법 2*/
    //for (int k = 0; k < 2; k++) {

    //    int temp = *p;

    //    for (int i = 0; i < n - 1; i++) {
    //        *(p + i) = *(p + i + 1);
    //    }

    //    *(p + n - 1) = temp;
    //}

    ///* 방법 3*/
    //int temp1 = *p;
    //int temp2 = *(p + 1);

    //for (int i = 2; i < n; i++) {
    //    *(p + i - 2) = *(p + i);
    //}

    //*(p + n - 2) = temp1;
    //*(p + n - 1) = temp2;


    ///* 방법 4*/
    //int first = *p;
    //int second = *(p + 1);

    //for (int* cur = p; cur < p + n - 2; cur++) {
    //    *cur = *(cur + 2);
    //}

    //*(p + n - 2) = first;
    //*(p + n - 1) = second;

    

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}