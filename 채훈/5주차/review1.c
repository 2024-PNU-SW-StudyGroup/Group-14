#include <stdio.h>

int main() {
    int i, evenCount = 0, oddCount = 0;
    int arr[10], even[10], odd[10];


    printf("����Ʈ�� ��� 10���� �Է��ϼ���:\n");
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


    printf("\n¦�� ����Ʈ:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n¦���� ����: %d\n", evenCount);


    printf("\nȦ�� ����Ʈ:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\nȦ���� ����: %d\n", oddCount);

    return 0;
}
