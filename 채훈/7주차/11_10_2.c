#include <stdio.h> 
int csv_get_value(char str[]) {
	static int num = 0;
	int a = 0;
	if (str[num] == '\0') return -1;

	for (int i = num; str[i] != ',' && str[i] != '\0'; i++) {


		a = a * 10 + (str[i] - '0');
		num++;
	}
	num++;
	return a;

}
int main(void) {
	int num;
	char str[] = "123,456,789,305,409,123";

	while ((num = csv_get_value(str)) >= 0)
		printf("%d\n", num);
	return 0;
}