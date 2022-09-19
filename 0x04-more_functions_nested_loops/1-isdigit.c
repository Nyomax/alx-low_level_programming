#include "main.h"
/**
 *_isdigit - function that checks for a digit (0 through 9).
 *@c: integer that is checked
 *Return: 1 on success, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
