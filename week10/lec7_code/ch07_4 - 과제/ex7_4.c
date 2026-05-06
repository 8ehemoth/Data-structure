#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"

void menu(void);

int main(void) {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice;
	int key;

/*
 과제 : 예제 7-4를 다음의 동작을 하도록 수정하시오.
– 입력 데이터를 예제의 char 데이터에서 int 데이터로 수정
– 데이터가 int 이므로 이에 맞게 전체 프로그램 수정
• 노드 8을 루트 노드 포이터로 지정
• 8, 5, 9, 2, 4, 6, 1, 13, 17, 12, 16 순으로 입력
• main 함수도 이에 맞게 수정하고 동작 확인
*/

	root = insertBSTNode(root, 8);
	insertBSTNode(root, 5);
	insertBSTNode(root, 9);
	insertBSTNode(root, 2);
	insertBSTNode(root, 4);
	insertBSTNode(root, 6);
	insertBSTNode(root, 1);
	insertBSTNode(root, 13);
	insertBSTNode(root, 17);
	insertBSTNode(root, 12);
	insertBSTNode(root, 16);

	while (1) {
		menu();
		scanf(" %c", &choice);

		switch (choice - '0') {
		case 1:	printf("\t[이진 트리 출력]  ");
			displayInorder(root); printf("\n");
			printf("\n");
			break;

		case 2:	printf("삽입할 문자를 입력하세요 : ");
			scanf(" %d", &key); 
			insertBSTNode(root, key);
			break;

		case 3:	printf("삭제할 문자를 입력하세요 : ");
			scanf(" %d", &key); 
			deleteBSTNode(root, key);
			break;

		case 4: printf("찾을 문자를 입력하세요 : ");
			scanf(" %d", &key); 
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %d를 찾았습니다! \n", foundedNode->key);
			else printf("\n 문자를 찾지 못했습니다.\n");
			break;

		case 5: 	
			return 0;

		default: 
			printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n");
			break;
		}
	}
}

void menu(void) {
	printf("\n*---------------------------*");
	printf("\n\t1 : 트리 출력");
	printf("\n\t2 : 문자 삽입");
	printf("\n\t3 : 문자 삭제");
	printf("\n\t4 : 문자 검색");
	printf("\n\t5 : 종료");
	printf("\n*---------------------------*");
	printf("\n메뉴입력 >> ");
}