#include "main.h"
/**
 * getNumSqr - function that gets the square root
 * @a: input number
 * @b: Counter variable
 * Return: int
 */
int getNumSqr(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);

	return (getNumSqr(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer.
 * Return: square root (n).
 */
int _sqrt_recursion(int n)
{
	return (getNumSqr(n, 0));
}
