#include <stdio.h>
/**
 * main-executes the function putchar
 * Description:program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return:0
 */
int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';
	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != e && ch != q)
		putchar(ch);
		putchar('\n');
	return (0);
}
