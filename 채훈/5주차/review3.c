// 3 ���ڿ� �޾Ƽ� ���ڷ� ��ȯ
#include <stdio.h>

int stringToNumber(char* input) {
    int number = 0;
    int i = 0;

    while (input[i] != '\0') {
        number = number * 10 + (input[i] - '0');
        i++;
    }

    return number;
}

int main() {
    char input[100];

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", input);

    int number = stringToNumber(input);
    printf("[%s] = %d\n", input, number);

    return 0;
}