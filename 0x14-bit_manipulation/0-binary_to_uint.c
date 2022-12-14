#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of
 * a number
 * @b: argument of function pointing to a string of 0 and 1 char
 * Return: returns the converted number or 0 if one
 * or more chars in the string b that is not 0 or 1 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;

		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;

		b++;
	}
	return (value);
}
