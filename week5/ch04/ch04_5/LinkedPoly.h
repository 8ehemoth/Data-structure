#pragma once
#include <stdio.h>

// 다항식 리스트의 노드 구조를 구조체로 정의
float coef;
typedef struct ListNode {
	float coef;
	int expo;
	struct ListNode* link;
} ListNode;

ListNode* createLinkedList(void);
ListNode* appendTerm(ListNode* L, float coef, int exp);
ListNode* addPoly(ListNode* A, ListNode* B);
void printPoly(ListNode* L);
ListNode* multTerm(ListNode* A, float mcoef, int mexp); //bx^c 곱하기 함수 새로 작성
ListNode* multPoly(ListNode* A, ListNode* B);
void deletePoly(ListNode* A);
