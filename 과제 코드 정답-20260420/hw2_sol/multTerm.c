#include "multTerm.h"

polynomial multTerm(polynomial A, float b, int c) {
	polynomial B;   // 다항식 덧셈의 결과 다항식을 저장할 polynomial 구조체 변수 선언
	int A_index = 0, B_index = 0;
	int A_degree = A.degree;
	B.degree = A.degree + c;

	// B 다항식 계수 초기화
	for (int i = 0; i <= B.degree; i++)
		B.coef[i] = 0;

	// 곱셈 수행
	for (int i = 0; i <= A.degree; i++) {
		B.coef[i] = A.coef[i] * b;
	}

	return B;    // 다항식 덧셈의 결과 다항식 C를 반환
}

void printPoly(polynomial P) {
	int i, degree;
	degree = P.degree;

	for (i = 0; i <= P.degree; i++) {
		printf("%3.0fx^%d", P.coef[i], degree--);
		if (i < P.degree) printf(" +");
	}
	printf("\n");
}