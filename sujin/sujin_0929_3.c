#include <stdio.h>
int main(void)
{
	int M,N;
	int a, i, j;
	int sum = 0;
	int lst[100];
	int lst2[100];

	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		//int lst[100];
		scanf("%d", &lst[i]);
	}

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		//int lst2[100];
		scanf("%d", &lst2[i]);
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (lst2[i] == lst[j]) {
				sum += 1;
			}
		}
		printf("%d ", sum);
		sum = 0;
	}

	return 0;
}