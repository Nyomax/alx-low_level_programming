#include "main.h"
/**
 * :string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @ch:Pointer to char
 * Return: nothing.
 */
char *string_toupper(char *ch)
{
	int a = 0;

	while (*(ch + a) != '\0')
	{
		if (*(ch + a) >= 97 && *(ch + a) <= 122)
		{
			*(ch + a) = *(ch + a) - ' ';
		}
		a++;
	}
	return (ch);
}
