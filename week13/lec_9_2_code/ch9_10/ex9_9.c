#include <stdio.h>
#include "bst.h"



//void treeSort(int a[], int n);
void treeSort_new(Sales a[], int n);

int main(void) {
	int i; // list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	
	Sales list[7] = {
		{"TV", 120},
		{"Notebook", 80},
		{"Mouse", 150},
		{"Keyboard", 60},
		{"Monitor", 90},
		{"Tablet", 110},
		{"Phone", 200}
	};
	
	int size = sizeof(list) / sizeof(list[0]); 	// list 배열의 원소 개수
	printf("\n정렬할 원소 : \n");
	
	//for (i = 0; i <= size - 1; i++) printf(" %d", list[i]);

	for (i = 0; i < size; i++) {
		printf("%12s, %12d\n",
			list[i].name,
			list[i].score);
	}

	printf("\n\n <<<<< 트리 정렬 수행 >>>>>> \n\n");
	treeSort_new(list, size);  // 트리 정렬 함수 호출


	getchar(); return 0;
}