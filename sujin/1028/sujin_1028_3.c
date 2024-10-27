// 3 문자열 받아서 숫자로 변환
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

    printf("문자열을 입력하세요: ");
    scanf("%s", input);

    int number = stringToNumber(input);
    printf("[%s] = %d\n", input, number);

    return 0;
}