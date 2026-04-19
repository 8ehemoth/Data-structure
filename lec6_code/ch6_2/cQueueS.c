#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

QueueType* createCQueue() {
	QueueType* cQ;
	cQ = (QueueType*)malloc(sizeof(QueueType));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

// 원형 큐가 공백 상태인지 검사하는 연산
int isCQueueEmpty(QueueType* cQ) {
	if (cQ->front == cQ->rear) {
		printf("원형큐 상태: 비어있음");
		return 1;
	}
	else
		return 0;
}

// 원형 큐가 포화 상태인지 검사하는 연산
int isCQueueFull(QueueType* cQ) {
	if ((cQ->rear + 1) % cQ_SIZE == cQ->front) {
		printf("원형큐 상태: 포화임.");
		return 1;
	}
	else
		return 0;
}

// 원형 큐의 rear에 원소를 삽입하는 연산
void enCQueue(QueueType* cQ, element item) {
	if (isCQueueFull(cQ))
		return;
	else {
		cQ->rear = (cQ->rear + 1) % cQ_SIZE;
		cQ->queue[cQ->rear] = item;
	}
}

// 원형 큐의 front에서 원소를 삭제하고 반환하는 연산
element deCQueue(QueueType* cQ) {
	element value; 
	if (isCQueueEmpty(cQ))
		return;
	else {
		cQ->front = (cQ->front + 1) % cQ_SIZE;
		value = cQ->queue[cQ->front];
		return value;
	}
}

// 원형 큐의 가장 앞에 있는 원소를 검색하는 연산
element peekCQ(QueueType* cQ) {
	element value;
	if (isCQueueEmpty(cQ))
		return;
	else {
		value = cQ->queue[(cQ->front + 1) % cQ_SIZE];
		return value;
	}

}

// 원형 큐의 원소를 출력하는 연산
void printCQ(QueueType* cQ) {
	int i, first, last;
	first = (cQ->front + 1) % cQ_SIZE;
	last = (cQ->rear + 1) % cQ_SIZE;
	printf(" Circular Queue : [");
	i = first;
	while (i != last) {
		printf("%3c", cQ->queue[i]);
		i = (i + 1) % cQ_SIZE;
	}
	printf(" ] ");
}