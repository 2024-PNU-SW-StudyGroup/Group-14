#include <stdio.h>
int main(void)
{
	char ch;
	scanf("%c", &ch);
	if (is_digit(ch))
		printf("%c is a digit\n", ch);
	if (is_alpha(ch))
		printf("%c is an alphabet\n", ch);
	if (is_upper(ch))
		printf("%c is an uppercase\n", ch);
	if (is_lower(ch))
		printf("%c is a lowercase\n", ch);
	return 0;
}

// return 1 if ch is a digit, i.e 0~9
// 0 (0x30) ~ 9 (0x39)
int is_digit(char ch) {
	//return (ch >= 0x30 && ch <= 0x39);
	return (ch >= '0' && ch <= '9');
}
// A(0x41) ~ Z(0x5A),a(0x61) ~ z(0x6A)
int is_alpha(char ch) {
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}
/* return 1 if ch is an alpha-numeric
character, i.e [A~Z][a~z][1~9] */
int is_alnum(char ch) {
	return (is_alpha(ch) || is_digit(ch));
}
// A(0x41) ~ Z(0x5A)
int is_upper(char ch) {
	return (ch >= 'A' && ch <= 'Z');
}
// a(0x61) ~ z(0x6A)
int is_lower(char ch) {
	return (ch >= 'a' && ch <= 'z');

}