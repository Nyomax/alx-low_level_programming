#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to char source 1
 * @s2: pointer to char source 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int aux;

	while (*(s1 + a) != '\0')
	{
		if (*(s1 + a) > *(s2 + a))
		{
			aux = *(s1 + a) - *(s2 + a);
			return (aux);
		}
		else if (*(s1 + a) < *(s2 + a))
		{
			aux = *(s1 + a) - *(s2 + a);
			return (aux);
		}
		a++;
	}
	return (0);
}

