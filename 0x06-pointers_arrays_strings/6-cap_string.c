#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Pointer to char
 * Return: char.
 */
char *cap_string(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if (i == 0 && (*(s + a) >= 97 && *(s + a) <= 122))
		{
			*(s + a) = *(s + a) - ' ';
			a++;
		}
		if (*(s + a) == ' ' || *(s + a) == '\n' || *(s + a) == '\t'
				|| *(s + a) == ',' || *(s + a) == ';' || *(s + a) = '!'
				|| *(s + a) == '?' || *(s + a) == '"' || *(s + a) == '('
				|| *(s + a) == ')' || *(s + a) == '{' || *(s + a) == '}'
				|| *(s + a) == '.')
		{
			a++;
			if (*(s + a) >= 97 && *(s + a) <= 122)
			{
				if (*(s + a) >= 97 && *(s + a) <= 122)
				{
					*(s + a) = *(s + a) - ' ';
				}
			}
			else
				a++;
		}
	}
}
