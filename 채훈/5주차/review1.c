#include <stdio.h>

int main() {
    int i, evenCount = 0, oddCount = 0;
    int arr[10], even[10], odd[10];


    printf("리스트의 요소 10개를 입력하세요:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        }
        else {
            odd[oddCount++] = arr[i];
        }
    }


    printf("\n짝수 리스트:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n짝수의 개수: %d\n", evenCount);


    printf("\n홀수 리스트:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n홀수의 개수: %d\n", oddCount);

    return 0;
}
