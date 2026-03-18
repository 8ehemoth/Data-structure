배열 Array

배열 선언에 따라 각 칸이 할당되는 메모리 크기가 다름

char c : 1byte
int : 4byte
short : 2byte
long : 4byte



for (i=0; str[i]; i++)
이 조건문은 글자를 만날 때까지는 True
\n을 만나는 순간 false가 되어 조건문이 끝나게된다.

문자열 0과 숫자 0은 다른거다.
'0' -> 숫자 43으로 나옴.

for 문은 최대 3개까지 거는게 좋음. 어쩔 수 없으면 4개
-> for문 10개로 5~10시간 동안 한 단계도 진행 안 되는 후배가 있었다고 하심.
for 문 안에 있는 구조를 뜯는게 더 좋다.



포인터

int i = 10;
int *ptr;
ptr = &i;

i : i의 데이터, 10
&i : i의 주소, 150번지
ptr : ptr이 나타내는 곳의 주소, 150번지
*ptr : ptr이 나타내는 곳의 데이터, 10
&ptr : ptr의 주소, 160번지






---

# Homework1

정수n개를입력받아포인터를이용하여배열을왼쪽으로두칸회전시켜
출력하는프로그램을작성하시오.– 예를들어배열이
• 1 2 3 4 5 6 7
라면왼쪽으로두칸회전한결과는
• 3 4 5 6 7 1 2
이다.
▪ 반드시포인터를이용하여배열을처리할것
▪ 배열인덱스arr[i] 사용금지
▪ 출력형식은예시와동일하게할것

예시코드를 바탕으로 수정하면 됌

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
  int n;
  int arr[100];
  printf("n 값을 입력하시오: ");
  scanf("%d", &n);
  printf("%d 개의 정수를 입력하시오.\n", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  int* p = arr;
  
  /* 포인터를 이용하여 배열을 왼쪽으로 두 칸 회전시키는 코드 작성 */
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}

프로젝트 파일 그대로 압축해서 제출


---

다음 시간부터는 알고리즘
의  기본이 되는 재귀호출








