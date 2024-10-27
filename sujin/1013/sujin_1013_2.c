#include <stdio.h>
int main(void)
{
	int i; // index
	int len; // length
	char str[] = "Hello 007 ^^";
	for (i = 0; str[i] != '\0'; i = i + 1)
		;

	len = i;

	printf("The length of [%s] : %d\n", str, len);
	return 0;
}