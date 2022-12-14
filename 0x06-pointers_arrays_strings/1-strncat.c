#include "main.h"
/**
 * _strncat- function that concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
	{
		if (b < n)
		{
			*(dest + a) = *(src + b);
			a++;
		}
		b++;
	}
	return (dest);
}

