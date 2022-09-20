#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: test value to check
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int num1, num2;
	int i;
	int aux = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num1 = n;
	num2 = num1;
	if (num1 > 9)
	{
		while (num1 >= 10)
		{
			aux = aux * 10;
			num1 = num1 / 10;
		}
		_putchar((num2 / aux) + '0');
		aux = aux / 10;
		for (i = aux; i >= 1; i = i / 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar(num1 + '0');
}
