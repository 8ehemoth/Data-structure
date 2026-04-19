#pragma once
typedef char element;     // 연결 큐 원소(element)의 자료형을 char로 정의

typedef struct QNode {
	element data;
	struct QNode* link;
} QNode;

typedef struct {
	QNode* front;
	QNode* rear;
}LQueueType;

LQueueType* createLinkedQueue();
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQueue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printLQ(LQueueType* LQ);