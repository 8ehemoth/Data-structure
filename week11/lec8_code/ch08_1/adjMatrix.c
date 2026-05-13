#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

// 공백 그래프를 생성하는 연산
void createGraph(graphType* g) {

	int i, j;

	g->n = 0;
	
	for (i = 0; i < MAX_VERTEX; i++) {
		for (j = 0; j < MAX_VERTEX; j++) {
			g->adjMatrix[i][j] = 0;
		}
		
	}
}

// 그래프 g에 정점 v를 삽입하는 연산 (정점 == A, B, C)
void insertVertex(graphType* g, int v) {
	
	if ((g->n) + 1 > MAX_VERTEX) {
		printf("\n 그래프 정점의 갯수를 초과했습니다.");
		return;
	}

	g->n++;
}

// 그래프 g에 간선 (u, v)를 삽입하는 연산
void insertEdge(graphType* g, int u, int v) {
	
	if (u >= g->n || v >= g->n) {
		printf("\n 그래프에 없는 정점입니다.");
		return;
	}

	g->adjMatrix[u][v] = 1;
}

// 그래프 g의 2차원 배열 값을 순서대로 출력하는 연산
void print_adjMatrix(graphType* g) {
	int i, j;
	for (i = 0; i < (g->n); i++) {
		printf("\n\t\t");
		for (j = 0; j < (g->n); j++)
			printf("%2d", g->adjMatrix[i][j]);
	}
}


/*
정점u의진입차수를반환하는함수intinDegree(graphType* g, int u)를
작성하고예제8-1의main() 에서테스트하시오.
– 예제8-1에서G1, G2, G3, G4 그래프의 인접행렬을출력하시오.
– 그래프G1~G4의모든정점들의진입차수출력하시오– 예시)
*/

// 진입 차수 == in-degree


int inDegree(graphType* g, int u) {

	int i;
	int count = 0;

	for (i = 0; i < g->n; i++) {
		if (g->adjMatrix[u][i] == 1) {
			count++;
		}
	}
	
	printf("\n%d 정점의 진입차수는 %d 입니다.", u, count);
}