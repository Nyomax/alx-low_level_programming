#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int a = 0;
	int aux = 0;
	char itemp;

	while (*(s + a) != '\0')
		a++;
	a--;
	while (aux < a)
	{
		itemp = s[a];
		s[a] = s[aux];
		s[aux] = itemp;
		aux++;
		a--;
	}
}
		
