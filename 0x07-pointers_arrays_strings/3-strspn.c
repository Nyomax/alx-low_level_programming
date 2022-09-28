#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes to check
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;
	
	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!(accept[i]))
			break;
	}
	return (j);
}
