#include <stdio.h>
int sum_product(int a, int b, int* sum, int* prod) {
    *sum = a+b;
    *prod = a*b;
    return 1;
}
int main(void) {
    int a=3, b=7, sum=0, prod=0;
    sum_product(a,b,&sum,&prod);
    printf("a+b=%d, a*b=%d\n",sum,prod);
    return 0;
}


#include <stdio.h> 
int csv_get_value(char str[]) {
	static int i=0;
	int num=0;
	
	if (i<0) return -1;

	while (str[i]>='0' && str[i]<='9') {
		num = num * 10 + str[i] -'0';
		i++;
	}
	if (!str[i]) i = -1;
	else i++;

	return num;
}
int main(void) {
	int num;
	char str[]="123,456,789,305,409,123";

	while ((num=csv_get_value(str))>=0)
		printf("%d\n",num);
	return 0;
}


#include <stdio.h> 
int hexa2decimal(char hexa_str[]) {
	int num = 0;
	for (int i=2; hexa_str[i]; i++) {
		if ('A' <= hexa_str[i] && hexa_str[i] <= 'F') num = 16 * num + hexa_str[i] - 'A' + 10;
		else num = 16 * num + hexa_str[i] - '0';
	}

	return num;
}

int main(void) {
	char hexa1[] = "0x1F34";
	char hexa2[] = "0x34CD56";
	char hexa3[] = "0x34FD5A";	

	printf("%s = %d\n", hexa1, hexa2decimal(hexa1));
	printf("%s = %d\n", hexa2, hexa2decimal(hexa2));
	printf("%s = %d\n", hexa3, hexa2decimal(hexa3));

	return 0;
}