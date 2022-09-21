#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a string
 * Return: int
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a += 1;
	}
	return (a);
}
