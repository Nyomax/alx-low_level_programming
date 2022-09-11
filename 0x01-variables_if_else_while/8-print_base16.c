#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-executes the putchar function
 * Description:program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return:0
 */
int main(void)
{
	int b;
	char ch;

		for (b = '0'; b <= '9'; b++)
		putchar(b);
		for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
