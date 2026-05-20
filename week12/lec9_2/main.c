#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int kor;
    int math;
} Student;


void bubbleSort_new(Student a[], int size, int key);
void printStudent(Student a[], int size);

int main(void) {

    Student list[5] = { {"kim", 90, 85}, 
                        {"Lee", 75, 95}, 
                        {"Park", 88, 70}, 
                        {"Choi", 60, 80}, 
                        {"Jung", 95, 92} };
    
    int size = sizeof(list) / sizeof(list[0]);
    int key;

    printf("===== 정렬 전 학생 정보 =====\n");
    printStudent(list, size);

    printf("\n정렬 기준 입력 (1: 국어, 2: 수학) : ");
    scanf("%d", &key);

    bubbleSort_new(list, size, key);

    if (key == 1 || key == 2) {
        printf("\n===== 정렬 후 학생 정보 =====\n");
        printStudent(list, size);
    }
    else {
        printf("\n잘못된 값을 선택해 정렬되지 않았습니다.\n");
        return 0;
    }
    return 0;
}

void bubbleSort_new(Student a[], int size, int key) {

    int i, j;
        
    Student temp;
    
    // 조건문을 반복문 안에 넣기 vs 반복문 밖에 넣기 
    // 뭐가 더 효율적인가 (안에 넣으면 코드 줄 자체는 줄지만, 연산속도 면에서도 괜찮은지)

        for (i = 0; i < size; i++) {
            for (j = 0; j < size - i - 1; j++) {

                if (key == 1) {
                    if (a[j].kor > a[j + 1].kor) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }

                else if (key == 2) {
                    if (a[j].math > a[j + 1].math) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }

            }
        }


}

void printStudent(Student a[], int size) {

    int i;

    printf("이름\t국어\t수학\n");

    for (i = 0; i < size; i++) {
        printf("%s\t%d\t%d\n",
            a[i].name,
            a[i].kor,
            a[i].math);
    }
}