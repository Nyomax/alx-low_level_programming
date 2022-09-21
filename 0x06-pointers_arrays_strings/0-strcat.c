#include "main.h"
/**
 * _strcat- function that concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	return (dest);
}
