#include <stdio.h>
/**
 * main-executes the function putchar
 * Description:prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 */
int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		ch = 'A';
		for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
