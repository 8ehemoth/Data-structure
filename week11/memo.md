그래프

방향성을 엣지 집합으로 표현함

방향을 꺽쇠로 알려줌
A에서 B로 감 : <A, B>
이걸 <B, A> 로 작성하면 아예 틀린 것

방향에 따른 분류 : 무방향, 방향 그래프(다이 그래프)
연결형태에 따른 분류 : 완전그래프, 부분그래프, 가중그래프

 완전그래프complete graph
• 각정점에서다른모든정점을연결하여최대로많은간선수를가진그래프

부분그래프subgraph
• 원래의그래프에서정점이나간선을일부만제외하여만든그래프

가중그래프weight graph, 네트워크network
• 정점을연결하는간선에가중치weight를할당한그래프

그래프G1에서정점A와인접한정점은B와D이고, 
정점A에부속되어있는 간선은(A,B)와(A,D)
<img width="566" height="461" alt="image" src="https://github.com/user-attachments/assets/88f2322e-3aec-4a09-bf08-3d79774c8578" />


차수(degree) : in-degree, out-degree

경로(path)


<img width="818" height="753" alt="image" src="https://github.com/user-attachments/assets/aeab2995-13bd-45bd-bd18-3e0326ab3c83" />


<img width="815" height="199" alt="image" src="https://github.com/user-attachments/assets/211b5017-d20b-484e-8a4d-f01c977d8690" />




---

연결 리스트로 구현하는 그래프

알파벳순으로 연결하기


---

깊이 우선 탐색 depth first search
너비 우선 탐색 breadth first search

