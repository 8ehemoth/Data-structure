#include <stdio.h>

void main() {
	char c, c_array[100];
	int i, i_array[100];
	short s, s_array[100];
	float f, f_array[100];
	long l, l_array[100];

	printf("char c의 크기 = %d \t: char c_array 크기 = %d \n", sizeof(c), sizeof(c_array));
	printf("int i의 크기 = %d \t: int i_array 크기 = %d \n", sizeof(i), sizeof(i_array));
	printf("short s의 크기 = %d \t: short s_array 크기 = %d \n", sizeof(s), sizeof(s_array));
	printf("float f의 크기 = %d \t: float f_array 크기 = %d \n", sizeof(f), sizeof(f_array));        // float이지만 %f가 아니라 %d로 출력한 이유는, sizeof 함수의 결괏값이 int형이기 때문에
	printf("long l의 크기 = %d \t: long l_array 크기 = %d", sizeof(l), sizeof(l_array));
	getchar(); //실행 창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령
}