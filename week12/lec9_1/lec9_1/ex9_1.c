#include <stdio.h>
void SelectionSort(int a[], int size);

int main(void) {
	int i,  list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };	// 정렬할 원소
	int size = sizeof(list) / sizeof(list[0]);

	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) 	
		printf("%d ", list[i]);	// 정렬 전의 원소 출력

	printf("\n\n<<<<<<<<<< 선택 정렬 수행 >>>>>>>>>>\n");

	SelectionSort(list, size);		// 선택 정렬 함수 호출

	getchar(); return 0;
}

void SelectionSort(int a[], int size) {
	int i, j, t, min_i, temp;

	for (i = 0; i < size; i++) {
		min_i = i;
		for (j = i+1; j < size; j++) {
			if (a[j] < a[min_i]) {
				min_i = j;
			}
		} // 최솟값 loop 찾기
		
		// 자리 바꾸기 SWAP
		temp = a[i];
		a[i] = a[min_i];
		a[min_i] = temp;

		printf("\n%d단계: ", i+1);
		for (t = 0; t < size; t++) {
			printf("%3d", a[t]);
		}
		
	}

}