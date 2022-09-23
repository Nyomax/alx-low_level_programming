#include "main.h"
/**
 * rot13 - Function that reverses the content of an array of integers.
 * @s: s is the array
 * Return: always 0.
 */
char *rot13(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		while ((s[x] <= 'z' && s[x] >= 'a')
				|| (s[x] <= 'Z' && s[x] >= 'A'))
		{
			if ((s[x] >= 'n' && s[x] <= 'z')
					||(s[x] >= 'N' && s[x] <= 'Z'))
			{
				s[x] -= 26;
			}
			s[x] += 13;
			break;
		}
	}
	return (s);

}

