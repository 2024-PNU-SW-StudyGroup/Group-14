#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {
    int *na; // 동적배열
    int N ; // 명령어 수
    char A[10]; // 입력받을 명령어 저장
    int B; // 입력받을 숫자 저장
    int size = 1; // na 원소 개수 늘리기 위한 변수

    na = malloc(sizeof(int)*1);
    
    assert(na);

    scanf("%d",&N);

    for (int i=0; i<N; i++) {
        scanf("%s",A);
        
        if (!strcmp(A,"push_back")) {
            scanf("%d",&B);
            na[size-1] = B;
            size++;
            na = realloc(na,size);
        }

        if (!strcmp(A,"get")) {
            scanf("%d",&B);
            printf("%d\n",na[B-1]);
        }
        
        if (!strcmp(A,"size")) {
            printf("%d\n",size-1);
        }

        if (!strcmp(A,"pop_back")) {
            na[size-1] = 0;
            size--;
        }
    }
    free(na);
    return 0;
}