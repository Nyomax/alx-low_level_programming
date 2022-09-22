#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && *(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a != n)
		dest[a++] = '\0';
	return (dest);
}
