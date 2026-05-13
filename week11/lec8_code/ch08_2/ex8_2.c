#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

int main(void) {
	int i;

	graphType* G1 = (graphType*)malloc(sizeof(graphType));
	graphType* G2 = (graphType*)malloc(sizeof(graphType));
	graphType* G3 = (graphType*)malloc(sizeof(graphType));
	graphType* G4 = (graphType*)malloc(sizeof(graphType));

	//G1 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.

	createGraph(G1);

	// for문으로 해도 상관없음
	insertVertex(G1, 0);
	insertVertex(G1, 1);
	insertVertex(G1, 2);
	insertVertex(G1, 3);

	insertEdge(G1, 0, 3);
	insertEdge(G1, 1, 3);
	insertEdge(G1, 2, 3);

	insertEdge(G1, 1, 2);
	insertEdge(G1, 3, 2);

	insertEdge(G1, 0, 1);
	insertEdge(G1, 2, 1);
	insertEdge(G1, 3, 1);

	insertEdge(G1, 1, 0);
	insertEdge(G1, 3, 0);



	//G2 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.

	createGraph(G2);

	insertVertex(G2, 0);
	insertVertex(G2, 1);
	insertVertex(G2, 2);


	insertEdge(G2, 1, 2);
	insertEdge(G2, 0, 2);

	insertEdge(G2, 0, 1);
	insertEdge(G2, 2, 1);

	insertEdge(G2, 1, 0);
	insertEdge(G2, 2, 0);

	//G3 구성 : 정점 u에 대한 간선 <u,v>의 삽입순서는 v가 큰 것부터.

	createGraph(G3);

	insertVertex(G3, 0);
	insertVertex(G3, 1);
	insertVertex(G3, 2);
	insertVertex(G3, 3);

	insertEdge(G3, 0, 3);
	insertEdge(G3, 0, 1);

	insertEdge(G3, 1, 3);
	insertEdge(G3, 1, 2);


	insertEdge(G3, 2, 3);
	

	//G4 구성 : 정점 u에 대한 간선 <u,v>의 삽입순서는 v가 큰 것부터.

	createGraph(G4);

	insertVertex(G4, 0);
	insertVertex(G4, 1);
	insertVertex(G4, 2);


	insertEdge(G4, 0, 2);
	insertEdge(G4, 0, 1);

	insertEdge(G4, 1, 2);
	insertEdge(G4, 1, 0);
	
	


	//--- 완성된 인접 리스트 출력
	printf("\n G1의 인접 리스트");
	print_adjList(G1);

	
	printf("\n\n G2의 인접 리스트");
	print_adjList(G2);

	
	printf("\n\n G3의 인접 리스트");
	print_adjList(G3);

	
	printf("\n\n G4의 인접 리스트");
	print_adjList(G4);
	
	getchar();  return 0;
}