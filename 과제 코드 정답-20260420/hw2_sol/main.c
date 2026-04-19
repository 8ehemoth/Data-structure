#include <stdio.h>
#include "multTerm.h"

int main(void) {
	polynomial A = { 3,{ 4,3,5,0 } };    // 다항식 A의 초기화
	polynomial B;

	B = multTerm(A, 3, 7);   // 다항식 A, B에 대한 덧셈을 수행하기 위해 addPoly 함수 호출 

	printf("\n A(x) =");  printPoly(A);   // 다항식 A 출력
	printf("\n B(x) =");  printPoly(B);   // 다항식 C 출력

	return 0;
}