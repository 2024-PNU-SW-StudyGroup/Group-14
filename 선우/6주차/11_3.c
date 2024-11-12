// Chap 6
// 1,2,3인 경우 각각 "case 1", "case 2", "case 3"를 출력하고
// 그 외 경우 "default" 라는 문자열을 출력
#include <stdio.h>

int main(void) {
    int n_c;

    do {
        scanf("%d", &n_c);

        if (n_c == 0) break;

        switch (n_c) {
            case 1:
                printf("case 1\n");
                break;
            case 2:
                printf("case 2\n");
                break;
            case 3:
                printf("case 3\n");
                break;
            default:
                printf("default\n");
        }
    } while (1);
}


// 1번 문제
#include <stdio.h>

int divsubsum(int n, int m, int A[]) {
	int sum = 0;

	while (m != 0) {
		sum += A[m-1];
		
		if (m % 2 != 0) {
			m--;
		}
		else {
			m /= 2;
		}
	}
	return sum;
}

int main() {
	int n;
	int m;
	int A[100];

	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	printf("%d", divsubsum(n, m, A));

	return 0;
}


// 2번 문제
#include <stdio.h>

void twochar(char A[]) {
	for (int i=1; A[i]; i++) {
		if (A[i-1] != A[i]) {
			printf("Yes");
			return;
		}
	}
	printf("No");
}

int main() {
    char A[100];

	scanf("%s", A);

	twochar(A);

    return 0;
}