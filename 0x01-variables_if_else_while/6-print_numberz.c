#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-executes the function putchar
 * Description:program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return:0
 */
int main(void)
{ 
	int in;

		for (in = 0; in <= 9; in++)
		putchar(in);
		putchar('\n');
	return (0);
}
