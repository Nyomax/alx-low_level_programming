#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-executes the function putchar
 * Description:program that prints all possible combinations of single-digit
 * numbers
 * Return:0
 */
int main(void)
{
	int b = 0;
		
		while (b < 10)
		{
			putchar(b + '0');
			if (b < 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		putchar('\n');
	return (0);
}
