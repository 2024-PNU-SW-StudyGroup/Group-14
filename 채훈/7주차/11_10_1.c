#include <stdio.h>
int sum_product(int a, int b, int* sum, int* prod)
{
	*sum = a + b;
	*prod = a * b;
	return 1;
}
int main(void)
{
	int a = 3, b = 7, sum = 0, prod = 0;
	sum_product(a, b, &sum, &prod);
	printf("a+b=%d, a*b=%d\n",
		sum, prod);
	return 0;
}