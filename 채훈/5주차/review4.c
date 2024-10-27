// 4 �Էµ� ����(�ƽ�Ű�ڵ�)�� 16������ ��ȯ�ϰ�, 10������ ����϶�  
#include <stdio.h>

int hexStringToDecimal(char input[]) {  // ������ ��� �迭 ���
    int result = 0;
    int i = 0;

    while (input[i] != '\0') {
        int value;

        if (input[i] >= '0' && input[i] <= '9') {
            value = input[i] - '0';
        }
        else if (input[i] >= 'A' && input[i] <= 'F') {
            value = input[i] - 'A' + 10;
        }

        result = result * 16 + value;
        i++;
    }

    return result;
}

int main() {
    char input[100];

    printf("16���� ���ڿ��� �Է��ϼ���: ");
    scanf("%s", input);

    int decimal = hexStringToDecimal(input);
    if (decimal != -1) {
        printf("%d\n", decimal);
    }

    return 0;
}