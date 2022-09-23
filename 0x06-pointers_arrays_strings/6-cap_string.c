#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Pointer to char
 * Return: char.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i == 0)
			*(s + i) = *(ch + i) - ' ';
		if (*(s + i) == ' ' || *(s + i) == '\t')
			i++;
		else if (*(s + i) == '\n' || *(s + i) == ',')
			i++;
		else if (*(s + i) == ';' || *(s + i) == '.')
			i++;
		else if (*(s + i) == '!' || *(s + i) == '?')
			i++;
		else if (*(s + i) == '"' || *(s + i) == '(')
			i++;
		else if (*(s + i) == ')' || *(s + i) == '{')
			i++;
		else if (*(s + i) == '}')
			i++;
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = *(s + i) - ' ';
			i++;
		}
	}
	return (s);
}
