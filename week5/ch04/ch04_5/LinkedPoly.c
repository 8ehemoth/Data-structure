#include "LinkedPoly.h"
#include <stdlib.h>

// 공백 다항식 리스트를 생성하는 연산
ListNode* createLinkedList(void) {
	ListNode* L;
	L = NULL;
	return L;
}
// 다항식 리스트에 마지막 노드를 추가하는 연산
ListNode* appendTerm(ListNode* L, float coef, int expo) {
	ListNode* newNode;
	ListNode* p;
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->coef = coef;
	newNode->expo = expo;
	newNode->link = NULL;

	if (L == NULL) {	// 다항식 리스트가 공백인 경우		
		L = newNode;
	}
	else {						// 다항식 리스트가 공백이 아닌 경우
		p = L;
		while (p->link != NULL) {
			p = p->link;			// 리스트의 마지막 노드를 찾음 
		}
		p->link = newNode;		// 새 노드 연결 
	}
	return L;
}

// 두 다항식의 덧셈을 구하는 연산 
ListNode* addPoly(ListNode* A, ListNode* B) {
	ListNode* pA = A;
	ListNode* pB = B;
	ListNode* C = NULL;				// C 공백 다항식 초기화
	float sum;

	// 두 다항식에 노드가 있는 동안 반복 수행
	while (pA && pB) {
		// 다항식 A의 지수가 다항식 B의 지수와 같은 경우
		if (pA->expo = pB->expo) {
			sum = pA->coef + pB->coef;
			C = appendTerm(C, sum, pA->expo);
			pA = pA->link; pB = pB->link;
		}
		// 다항식 A의 지수가 다항식 B의 지수보다 큰 경우
		else if (pA->expo > pB->expo) {
			C = appendTerm(C, pA->coef, pA->expo);
			pA = pA->link;
		}
		// 다항식 A의 지수가 다항식 B의 지수보다 작은 경우
		else {
			C = appendTerm(C, pB->coef, pB->expo);
			pB = pB->link;
		}
	}
	// 다항식 A에 남아 있는 노드 복사
	for (; pA != NULL; pA = pA->link)
		C = appendTerm(C, pA->coef, pA->expo);

	// 다항식 B에 남아 있는 노드 복사
	for (; pB != NULL; pB = pB->link)
		C = appendTerm(C, pB->coef, pB->expo);

	return C;
}

// 다항식 리스트를 출력하는 연산
void printPoly(ListNode* L) {
	ListNode* p = L;
	for (; p; p = p->link) {
		printf("%3.0fx^%d", p->coef, p->expo);
		if (p->link != NULL) printf(" +");
	}
}



ListNode* multPoly(ListNode* A, ListNode* B)
{
	ListNode* C, * tmp, * q = B;
	C = createLinkedList();    //공백 다항식 생성하기

	for (; q; q = q->link) {
		tmp = multTerm(A, q->coef, q->expo);		// tmp = A * (B의 항)
		C = addPoly(C, tmp);					// C = C + tmp;
	}
	return C;
}


ListNode* multTerm(ListNode* A, float mcoef, int mexpo)
{
	ListNode* p = A;
	ListNode* C = NULL;
	float mult;
	int sum;

	C = createLinkedList();

	for (; p; p = p->link) {
		mult = p->coef * mcoef;
		sum = p->expo + mexpo;
		C = appendTerm(C, mult, sum);

	}

	return C;
}




void deletePoly(ListNode* A)
{
	ListNode* p = A;
	ListNode* q;

	while (p) {
		q = p;
		p = p->link;
		free(q);
	}
}

