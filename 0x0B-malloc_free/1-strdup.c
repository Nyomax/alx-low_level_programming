#include "main.h"
#include "stdlib.h"
/**
 * _strdup - a function that  returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: input char
 * Return: char
 */
char *_strdup(char *str)
{
	int i;
	char *str_1;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		str_1 = malloc(sizeof(char) * i);
	if (str_1 == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		str_1[i] = str[i];
	str_1[i] = '\0';
	return (str_1);
}
