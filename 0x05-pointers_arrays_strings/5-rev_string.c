#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char itemp;

	while (*(s + a) != '\0')
		a += 1;
	a -= 1;

	while (b < a)
	{
		itemp = s[a];
		s[a] = s[b];
		s[b] = itemp;
		b++;
		a--;
	}
}
