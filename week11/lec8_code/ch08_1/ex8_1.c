#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"


int main(void) {
	int i;

	graphType* G1 = (graphType*)malloc(sizeof(graphType));
	graphType* G2 = (graphType*)malloc(sizeof(graphType));
	graphType* G3 = (graphType*)malloc(sizeof(graphType));
	graphType* G4 = (graphType*)malloc(sizeof(graphType));

	//G1 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
	createGraph(G1);

	insertVertex(G1, 0);
	insertVertex(G1, 1);
	insertVertex(G1, 2);
	insertVertex(G1, 3);

	insertEdge(G1, 0, 1);
	insertEdge(G1, 0, 3);
	insertEdge(G1, 1, 0);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 1, 3);
	insertEdge(G1, 2, 1);
	insertEdge(G1, 2, 3);
	insertEdge(G1, 3, 0);
	insertEdge(G1, 3, 1);
	insertEdge(G1, 3, 2);



	//G2 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
	createGraph(G2);

	insertVertex(G2, 0);
	insertVertex(G2, 1);
	insertVertex(G2, 2);

	insertEdge(G2, 0, 1);
	insertEdge(G2, 0, 2);
	insertEdge(G2, 1, 0);
	insertEdge(G2, 1, 2);
	insertEdge(G2, 2, 0);
	insertEdge(G2, 2, 1);




	//G3 구성 : 정점 u에 대한 간선 <u,v>의 삽입순서는 v가 큰 것부터.
	createGraph(G3);

	insertVertex(G3, 0);
	insertVertex(G3, 1);
	insertVertex(G3, 2);
	insertVertex(G3, 3);

	insertEdge(G3, 0, 1);
	insertEdge(G3, 0, 3);
	insertEdge(G3, 1, 2);
	insertEdge(G3, 1, 3);
	insertEdge(G3, 2, 3);


	//G4 구성 : 정점 u에 대한 간선 <u,v>의 삽입순서는 v가 큰 것부터.
	createGraph(G4);

	insertVertex(G4, 0);
	insertVertex(G4, 1);
	insertVertex(G4, 2);

	insertEdge(G4, 0, 1);
	insertEdge(G4, 0, 2);
	insertEdge(G4, 1, 0);
	insertEdge(G4, 1, 2);


	//--- 완성된 인접 행렬 출력
	printf("\n G1의 인접 행렬");
	print_adjMatrix(G1);

	
	printf("\n\n G2의 인접 행렬");
	print_adjMatrix(G2);

	
	printf("\n\n G3의 인접 행렬");
	print_adjMatrix(G3);
	

	printf("\n\n G4의 인접 행렬");
	print_adjMatrix(G4);


	printf("\n\n 그래프 G1에서..");
	for (i = 0; i < 4; i++) {
		inDegree(G1, i);
	}

	printf("\n\n 그래프 G2에서..");
	for (i = 0; i < 3; i++) {
		inDegree(G2, i);
	}

	printf("\n\n 그래프 G3에서..");
	for (i = 0; i < 4; i++) {
		inDegree(G3, i);
	}

	printf("\n\n 그래프 G4에서..");
	for (i = 0; i < 3; i++) {
		inDegree(G4, i);
	}


	getchar();  return 0;
}