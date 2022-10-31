#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at
 * a given index.
 * @n: bit value in the index
 * @index: is the index, starting from 0 of the bit you
 * want to get
 * Return: the value of the bit at index index or -1 if an
 * error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 1);

	return (get_bit(n >> 1, index - 1));
}
