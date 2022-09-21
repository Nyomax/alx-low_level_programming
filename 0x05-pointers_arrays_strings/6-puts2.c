#include "main.h"
/**
 * puts2 - function that prints every other character
 * @str: pointer to char
 * Return: nothing
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
		a += 1;
	}
	_putchar('\n');
}
