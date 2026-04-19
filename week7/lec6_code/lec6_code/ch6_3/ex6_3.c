#include "LinkedQueue.h"

int main(void) {
	LQueueType* LQ_3 = createLinkedQueue();  // 연결 큐 생성
	element data;
	
	printf("\n ***** 연결 큐 연산 ***** \n");
	printf("\n 삽입 A>>");  enLQueue(LQ_3, 'A'); printLQ(LQ_3);
	printf("\n 삽입 B>>");  enLQueue(LQ_3, 'B'); printLQ(LQ_3);
	printf("\n 삽입 C>>");  enLQueue(LQ_3, 'C'); printLQ(LQ_3);

	data = peekLQ(LQ_3);
	printf(" peek item : %c \n", data);

	printf("\n 삭제  >>");  
	data = deLQueue(LQ_3); printLQ(LQ_3);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삭제  >>");
	data = deLQueue(LQ_3); printLQ(LQ_3);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삭제  >>");	
	data = deLQueue(LQ_3); printLQ(LQ_3);
	printf("\t\t삭제 데이터: %c", data);

	printf("\n 삽입 D>>");  enLQueue(LQ_3, 'D'); printLQ(LQ_3);
	printf("\n 삽입 E>>");  enLQueue(LQ_3, 'E'); printLQ(LQ_3);
	getchar();  return 0;
}