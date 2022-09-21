#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: pointer to char
 * Return: nothing
 */
void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
		a += 1;
	b = a / 2;
	if (a % 2 == 1)
		b += 1;
	while (str[b] != '\0')
		_putchar(*(str + n));
		b++;
	_putchar('\n');
}
