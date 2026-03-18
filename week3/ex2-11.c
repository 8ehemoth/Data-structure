#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int i;
	char* ptrArray[2];
	char** ptrptr;

	int j;
	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;  //ptrArray[0]의 주소를 담고있음

	printf("ptrArray[0]의 주소 (&ptrArray[0]) = %u\n", &ptrArray[0]);
	printf("ptrArray[0]의 값 (ptrArray[0]) = %u\n", ptrArray[0]);
	printf("ptrArray[0]의 참조값 (*ptrArray[0]) = %c\n", *ptrArray[0]);
	printf("ptrArray[0]의 참조 문자열 (*ptrArray[0]) = %s\n\n", *ptrArray);


	printf("ptrArray[1]의 주소 (&ptrArray[1]) = %u\n", &ptrArray[1]);
	printf("ptrArray[1]의 값 (ptrArray[1]) = %u\n", ptrArray[1]);
	printf("ptrArray[1]의 참조값 (*ptrArray[1]) = %c\n", *ptrArray[1]);
	printf("ptrArray[0]의 참조 문자열 (*ptrArray[1]) = %s\n\n", *(ptrArray+1));
	

	printf("ptrptr의 주소 (&ptrptr) = %u\n", &ptrptr);
	printf("ptrptr의 값 (ptrArray[1]) = %u\n", ptrptr);

	printf("ptrptr의 2차 참조 문자열 (**ptrptr) = %s", *ptrptr);



	getchar();

}