#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-executes the function putchar
 * Description:program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return:0
 */
int main(void)
{
	char ch;
		for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
		putchar('\n');
	return (0);
}
