#include <stdio.h>
/** 
 * main-runs the functions called
 * Description:
 * prints the size of various types on the computer it is compiled and run on
 * Return:0 on success
 */
int main(void)
{ 
	char for_character;
	int for_integer;
	long for_long;
	long long for_longlong;
	float for_float;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(for_character));
	printf("Size of an int: %lu byte(s)\n", sizeof(for_integer));
	printf("Size of a long: %lu byte(s)\n", sizeof(for_long));
	printf("Size of a long long: %lu byte(s)\n", sizeof(for_longlong));
	printf("Size of a float: %lu bytes(s)\n", sizeof(for_float));

	return (0);
}
