#include "main.h"
/**
 * getNumPrim - function that gets if num is 0 or 1
 * @a: input number
 * @b: Counter variable
 * Return: int
 */
int getNumPrim(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);

	return (getNumPrim(a, b + 1));
}
/**
 * is_prime_number - function returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 * Return: int
 */
int is_prime_number(int n)
{
	return (getNumPrim(n, 2));
}
