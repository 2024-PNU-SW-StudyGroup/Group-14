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


// C ���� ���ڿ� �˻��� �����ϴ� ����
// �־��� ���ڿ� str���� Ư�� ���ڿ� substr�� ù ��° �߻� ��ġ�� ã��
#include <stdio.h>

char* mystrstr(char* str, char* substr) {
    if (*substr == '\0') return str; // �� ���ڿ� ó��

    while (*str) {
        char* start = str;
        char* temp = substr;
        // str�� ������Ű�� ó������ ��ġ�� �ǵ����� ����.
        // => �����ؼ� ���
        while (*temp && (*start == *temp)) {
            start++;
            temp++;
        }

        if (*temp == '\0') return str; // substr�� '\0' ���� ���� ����
        str++;
    }
    return NULL; // �κ� ���ڿ��� ã�� ���� ���
}

void find_str(char* str, char* substr) {
    char* pos = mystrstr(str, substr);
    if (pos)
        printf("Found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    else
        printf("The string '%s' was not found in '%s'\n", substr, str);
}

int main(void) {
    char* str = "one two three"; // *str�� str�� ����Ű�� �ּҿ� ����� ���� �ǹ�
    find_str(str, "two"); // �� str���� "one two three" �� "o"�� �ּҰ� �������
    find_str(str, ""); // str ��ü�� ���ڿ� ���ͷ��� ���� �ּ��̹Ƿ� �׳� ������ ��
    find_str(str, "nine");
    find_str(str, "n"); // "two"�� �ڵ����� ���� �ּҷ� ��ȯ�Ǿ� ����

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