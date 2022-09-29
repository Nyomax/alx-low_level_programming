#include "main.h"
/**
 * _pow_recursion - functiont to calculate x power y.
 * @x: first integer.
 * @y: second integer.
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
