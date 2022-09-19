#include "main.h"
/**
 * -isdigit.c - function that is executed
 * Description:function that checks for a digit (0 through 9).
 * @c:integer that is checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
