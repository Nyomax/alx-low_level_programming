#include <stdio.h>
/**
 * main-runs the function printf
 * Description: program that prints the size of various types on the computer
 * it is compiled and run on
 * Return:0
 */
int main(void)
{
	char ch;
	int in;
	long int l_int;
	long long int ll_int;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(in));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(ll_int));
	printf("Size of a float:%ld byte(s)\n", sizeof(f));
	return (0);
}

