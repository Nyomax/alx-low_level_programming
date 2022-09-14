#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: This is the argument used for the function
 * Return:1 if successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
