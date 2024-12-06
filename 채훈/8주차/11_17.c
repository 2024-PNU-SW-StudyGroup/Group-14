#include <stdio.h>
void mystrcpy2(char* dest, char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = *src;
}
int main(void)
{
    char mystr1[256];
    char mystr3[256];
    gets(mystr1);
    mystrcpy2(mystr3, mystr1);
    puts(mystr3);
    return 0;
}


// C 언어에서 문자열 검색을 구현하는 문제
// 주어진 문자열 str에서 특정 문자열 substr의 첫 번째 발생 위치를 찾기
#include <stdio.h>

char* mystrstr(char* str, char* substr) {
    if (*substr == '\0') return str; // 빈 문자열 처리

    while (*str) {
        char* start = str;
        char* temp = substr;
        // str을 증가시키면 처음만난 위치로 되돌리기 힘듬.
        // => 복제해서 사용
        while (*temp && (*start == *temp)) {
            start++;
            temp++;
        }

        if (*temp == '\0') return str; // substr가 '\0' 까지 가면 존재
        str++;
    }
    return NULL; // 부분 문자열을 찾지 못한 경우
}

void find_str(char* str, char* substr) {
    char* pos = mystrstr(str, substr);
    if (pos)
        printf("Found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    else
        printf("The string '%s' was not found in '%s'\n", substr, str);
}

int main(void) {
    char* str = "one two three"; // *str은 str이 가리키는 주소에 저장된 값을 의미
    find_str(str, "two"); // 곧 str에는 "one two three" 중 "o"의 주소가 들어있음
    find_str(str, ""); // str 자체가 문자열 리터럴의 시작 주소이므로 그냥 보내면 됨
    find_str(str, "nine");
    find_str(str, "n"); // "two"는 자동으로 시작 주소로 변환되어 전달

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ispalindrome(char* str) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main(void) {
    char buffer[1024];

    gets(buffer);
    printf("[%s] is ", buffer);
    if (ispalindrome(buffer)) puts("a palindrome");
    else puts("not a palindrome");

    return 0;
}