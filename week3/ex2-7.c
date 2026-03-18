#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int i = 10, j = 20;
	int* ptr;


	printf("i의 값 = %d\n", i);
	printf("j의 값 = %d\n", j);
	printf("i의 메모리 주소(&i) = %u\n", &i);
	printf("j의 메모리 주소(&j) = %u\n\n", &j);

	printf("<<ptr=&i 실행>>\n");
	ptr = &i;
	printf("ptr의 메모리 주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %d\n", ptr);
	printf("ptr의 참조값(*ptr) = %d\n\n", *ptr);

	printf("<<ptr=&j 실행>>\n");
	ptr = &j;
	printf("ptr의 메모리 주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %d\n", ptr);
	printf("ptr의 참조값(*ptr) = %d\n\n", *ptr);

	printf("<<i=*ptr 실행>>\n");
	i = *ptr;
	printf("i의 값 = %d\n", i);

	getchar();

}