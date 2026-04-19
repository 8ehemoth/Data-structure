#include "queueS.h"

int main(void) {
	QueueType* Q_1 = createQueue();// 큐 생성
	element data;
	
	printf("\n ***** 순차 큐 연산 ***** \n");
	printf("\n 삽입 A>>");		enQueue(Q_1, 'A'); printQ(Q_1);
	printf("\n 삽입 B>>");		enQueue(Q_1, 'B'); printQ(Q_1);
	printf("\n 삽입 C>>");		enQueue(Q_1, 'C'); printQ(Q_1);

	// peek item -> data
	data = peekQ(Q_1);
	printf(" peek item : %c \n", data);

	printf("\n 삭제  >>");	
	data = deQueue(Q_1);  printQ(Q_1);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삭제  >>");
	data = deQueue(Q_1);  printQ(Q_1);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삭제  >>");
	data = deQueue(Q_1);  printQ(Q_1);
	printf("\t\t삭제 데이터: %c", data);

	printf("\n 삽입 D>>");		enQueue(Q_1, 'D');  printQ(Q_1);
	printf("\n 삽입 E>>");		enQueue(Q_1, 'E');  printQ(Q_1);
	
	getchar();  return 0;
}