#include <stdio.h>


int  alphabet(char x[]) {

	for (int i = 1; x[i] != 0; i++) {
		if (x[i] != x[i - 1]) {
			printf("YES");
			return;
		}
	}
	printf("NO");


}


int main(void)
{
	char a[100];
	scanf("%s", a);

	alphabet(a);

	return 0;
}