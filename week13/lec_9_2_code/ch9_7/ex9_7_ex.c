#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 30
extern int size;

typedef struct Sales {
	char name[20];
	int score;
	int year;
} Sales;

//int sorted[MAX];
Sales sorted[MAX];
int size;



void merge(Sales a[], int m, int middle, int n, int key);
void mergeSort_new(Sales a[], int m, int n, int key);
void printf_result(Sales a[], int key, int n);

int main(void) {

	Sales list[7] = {
		{"TV", 120, 2021},
		{"Notebook", 80, 2023},
		{"Mouse", 150, 2020},
		{"Keyboard", 60 ,2022},
		{"Monitor", 90, 2021},
		{"Tablet", 110, 2024},
		{"Phone", 200, 2022}
		};

	int i, key;
	//list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };

	size = sizeof(list) / sizeof(list[0]); 	// list 배열의 원소 개수
	
	printf("정렬전 자료\n");
	printf("품명        판매 실적        제조연도\n");
	for (i = 0; i < size; i++) {
		printf("%10s, %10d, %10d\n",
			list[i].name,
			list[i].score,
			list[i].year);
	}
	
	//printf("\n 정렬할 원소 >> ");
	//for (i = 0; i < size; i++) printf("%4d ", list[i]);
	//printf("\n\n<<<<<<<<<< 병합 정렬 수행 >>>>>>>>>>\n");
	
	printf("key값을 입력해주세요: ");
	scanf("%d", &key);

	//mergeSort(list, 0, size-1);
	mergeSort_new(list, 0, size - 1, key);   // 병합 정렬 함수 호출
	printf_result(list, key, size);
	getchar();  return 0;
}


void merge(Sales a[], int m, int middle, int n, int key) {
	int i, j, k, t;
	i = m;							// 첫 번째 부분집합의 시작 위치 설정
	j = middle + 1;				// 두 번째 부분집합의 시작 위치 설정
	k = m;						// 배열 sorted에 정렬된 원소를 저장할 위치 설정

	while (i <= middle && j <= n) {
		if (key == 1) {
			if (a[i].score <= a[j].score)
				sorted[k++] = a[i++];
			else
				sorted[k++] = a[j++];
		}
		else {
			if (a[i].year <= a[j].year)
				sorted[k++] = a[i++];
			else
				sorted[k++] = a[j++];
		}

	} // while

	if (i > middle)
		for (t = j; t <= n; t++, k++) sorted[k] = a[t];
	else
		for (t = i; t <= middle; t++, k++)	sorted[k] = a[t];

	for (t = m; t <= n; t++) 	a[t] = sorted[t];

	//printf("\n 병합 정렬 >> ");
	// 여기도 수정필요
	//for (t = 0; t < size; t++) printf("%4d ", a[t]);



}



void mergeSort_new(Sales a[], int m, int n, int key) {
	int middle;

	// 기본이 오름차순, key=1이면 판매실적순, key=2이면 제조연도순

	if (m < n) {
		middle = (m + n) / 2;
		mergeSort_new(a, m, middle, key);		// 앞 부분에 대한 분할 작업 수행
		mergeSort_new(a, middle + 1, n, key);	// 뒷 부분에 대한 분할 작업 수행
		merge(a, m, middle, n, key);			// 부분집합에 대하여 정렬과 병합 작업 수행 
	}

}

void printf_result(Sales a[], int key, int n) {
	int i;
	
	if (key == 1) {
		printf("판매 실적 기준 오름차순 정렬\n");
	}
	else {
		printf("제조연도 기준 오름차순 정렬\n");
	}

	for (i = 0; i < n; i++) {
		printf("%10s, %10d, %10d\n",
			a[i].name,
			a[i].score,
			a[i].year);
	}
}

/*
void mergeSort(int a[], int m, int n) {
	int middle;
	if (m < n) {
		middle = (m + n) / 2;
		mergeSort(a, m, middle);		// 앞 부분에 대한 분할 작업 수행
		mergeSort(a, middle + 1, n);	// 뒷 부분에 대한 분할 작업 수행
		merge(a, m, middle, n);			// 부분집합에 대하여 정렬과 병합 작업 수행
	}
}
*/