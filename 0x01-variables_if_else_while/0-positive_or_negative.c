#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-executes a function srand
 * Description:get a random number and prints the number
 * be it positive, negative or zero
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
	return (0);
}
