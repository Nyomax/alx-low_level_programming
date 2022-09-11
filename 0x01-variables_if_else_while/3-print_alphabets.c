#include <stdio.h>
/**
 * main-runs the function putchar
 * Description:prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return:0
 */
int main(void)
{
	char ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++);
		putchar(ch);
		for (ch = 'A'; ch <= 'Z'; ch++);
		putchar(ch);
		putchar('\n');
	return (0);
}
