#include "main.h"
/**
 *print_last_digit - a function that prints the last digit of a number
 *@last_digit:argument of the function
 *Return:0
 */
int print_last_digit(int p)
{
	int last_digit = p % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return last_digit;
}
