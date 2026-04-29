#include <stdlib.h>
#include "folderSize.h"

// size를 루트 노드의 데이터 필드로 하여 왼쪽과 오른쪽 서브 트리를 연결하는 연산
treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->size = size;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

int sum = 0;

// 각 폴더 크기를 계산하기 위한 후위 순회 연산
int postorder_FolderSize(treeNode* root) {
	if (root) {
		
		postorder_FolderSize(root->left);  //L
		postorder_FolderSize(root->right);   //R
		FolderSize += root->size;  //D
	}
}


// 후위 순회 연산을 추천함

/// 서브트리를 나눈다면 왼쪽 서브트리 말단 노드 출력하고 윗단 노드 출력
/// 그리고 오른쪽 서브트리도 똑같이.

