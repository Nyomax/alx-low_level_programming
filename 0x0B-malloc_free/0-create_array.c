#include "main.h"
/**
 * create_array - create an array of chars, with a specific char.
 * @size: input size
 * @c: input char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *tmp = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || tmp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tmp[i] = c;
	return (tmp);
}
