#include <stdio.h>
/**
 *main-runs the functions called
 *Description:
 *prints the size of various types on the computer it is compiled and run on
 *Return:0 on success
 */
int main(void)
{
	char for_character;
	int for_integer;
	long int for_long;
	long long int for_longlong;
	float for_float;

	printf("Size of a char: %ld byte(s)\n", sizeof(for_character));
	printf("Size of an int: %ld byte(s)\n", sizeof(for_integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(for_long));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(for_longlong));
	printf("Size of a float: %ld byte(s)\n", sizeof(for_float));
	return (0);
}
