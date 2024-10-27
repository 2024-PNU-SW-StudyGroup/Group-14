// 4 입력된 문자(아스키코드)를 16진수로 변환하고, 10진수로 출력하라  
#include <stdio.h>

int hexStringToDecimal(char input[]) {  // 포인터 대신 배열 사용
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

    printf("16진수 문자열을 입력하세요: ");
    scanf("%s", input);

    int decimal = hexStringToDecimal(input);
    if (decimal != -1) {
        printf("%d\n", decimal);
    }

    return 0;
}