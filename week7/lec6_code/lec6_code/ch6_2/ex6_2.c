#include "cQueueS.h"

int main(void) {
	QueueType* cQ_2 =  createCQueue();  // 큐 생성
	element data;
	
	printf("\n ***** 원형 큐 연산 ***** \n");
	printf("\n 삽입 A>>");  enCQueue(cQ_2, 'A'); printCQ(cQ_2);
	printf("\n 삽입 B>>");  enCQueue(cQ_2, 'B'); printCQ(cQ_2);
	printf("\n 삽입 C>>");  enCQueue(cQ_2, 'C'); printCQ(cQ_2);

	data = peekCQ(cQ_2);
	printf(" peek item : %c \n", data);


	printf("\n 삭제  >>");  
	data = deCQueue(cQ_2); printCQ(cQ_2);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삭제  >>");
	data = deCQueue(cQ_2); printCQ(cQ_2);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삭제  >>");
	data = deCQueue(cQ_2); printCQ(cQ_2);
	printf("\t\t삭제 데이터: %c", data);

	printf("\n 삽입 D>>");    enCQueue(cQ_2, 'D'); printCQ(cQ_2);
	printf("\n 삽입 E>>");    enCQueue(cQ_2, 'E'); printCQ(cQ_2);
	getchar(); return 0;
}