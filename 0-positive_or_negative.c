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
	int numb;

	srand(time(0));
	numb = rand() - RAND_MAX / 2;
        	if (numb > 0)
			printf("%d is positive\n", numb);
		else if (numb < 0)
			printf("%d is negative\n", numb);
		else
			printf("%d is zero\n", numb);
	return (0);
}
