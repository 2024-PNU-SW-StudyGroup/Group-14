#include <stdio.h>
int main(void)
{
	int n_c;
	do {
		scanf("%d", &n_c);

		if (n_c == 0) {
			break;
		}

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
	return 0;
}