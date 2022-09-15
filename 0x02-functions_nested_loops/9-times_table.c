#include "main.h"
/**
 *times_table - a function that prints the 9 times table,
 *starting with 0
 *
 *Return:0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			k = i * j;
			if (k <= 9)
				_putchar(32);
			else
				_putchar((k / 10 ) + '0');
			_putchar((k % 10) + '0');
		}
	}
}
