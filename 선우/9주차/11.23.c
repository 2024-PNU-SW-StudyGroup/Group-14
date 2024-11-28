// 1
#include <stdio.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *a, int l, int r) {
    int i;
    if (l == r) {
        printf("%s\n", a);
    }
    else {
        for (i=l; i<=r; i++) {
            // 여기에 프린트 넣어서 실행되는거 확인해보기
            swap(a+l,a+i);
            permute(a, l+1, r);
            swap(a+l,a+i);
        }
    }
}

void main(void) {
    char t[100];

    gets(t);
    permute(t,0,strlen(t)-1);
}


// 2
#include <stdio.h>

char * mystrtok(char *str, char delim) {
    static char *psave = 0;
    char *pstr = 0;

    if (str) psave = str;

    if (psave) {
        str = psave;
        while (*str == delim) str++;
        
        if (*str) {
            pstr = str; // 시작은 pstr

            while (*str && *str != delim) str++; // 끝은 str
        
            if (*str) {
                psave = str + 1; // 정적변수인 psave에 구분자 다음으로 pointer 옮겨두고
                *str = 0; // 구분자를 NULL로 만듦
            }

            else {
                psave = 0;
            }

            return pstr;
        }
    }
}

int main(void) {
    char t[] = ", 123.4, he ll o, 12--,%^&*";
    char *pstr = t; // 보내주는거
    char *string; // 받아오는거

    string = mystrtok(pstr, ',');

    while(string) {
        printf("%s\n", string);
        string = mystrtok(0, ',');
    }

    return 0;
}