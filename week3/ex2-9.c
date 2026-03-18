#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int i;
	char string1[20] = "Dreams come true!", string2[20], * ptr1, * ptr2;

	printf("string1ÀÇ ÁÖ¼Ò = %u \t ptr = %u\n", string1, &ptr1);

	printf("string1 = %s\n", string1);
	
	ptr1 = string1;
	printf("ptr1 = %s\n\n", ptr1);

	printf("%s\n", ptr1+7);
	
	ptr2 = &string1[7];
	printf("%s\n\n", ptr2);

	for (i = 16; i>=0; i--) {
		putchar(*(ptr1 + i));
	}

	printf("\n\n");

	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i);
	}

	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	
	getchar();

}