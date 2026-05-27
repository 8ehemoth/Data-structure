#include <stdio.h>

void intervalSort(int a[], int begin, int end, int interval) {
	int i, j, item;

	for (i = begin + interval; i <= end; i = i + interval) {
		item = a[i];  // 첫 루프엔 0+4 자리에 있는 16을 넣어줌

		// 이 반복문에 조건문이 들어간건가?
		for (j = i - interval; j >= begin && item < a[j]; j = j - interval) {
			a[j + interval] = a[j];   // 자리 바꿈
		}
		a[j + interval] = item;
	}

}

void shellSort(int a[], int size) {
	int i, interval;
	interval = size / 2;
	while (interval >= 1) {
		for (i = 0; i < interval; i++)  
			intervalSort(a, i, size - 1, interval);
		printf("\n interval=%d >> ", interval);
		for (i = 0; i < size; i++) 
			printf("%d ", a[i]);
		printf("\n");
		interval = interval / 2;
	}
}