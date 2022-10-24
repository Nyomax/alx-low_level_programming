#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input size 1
 * @size: input size bytes
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	_memset(str, 0, nmemb * size);
	return (str);
}
