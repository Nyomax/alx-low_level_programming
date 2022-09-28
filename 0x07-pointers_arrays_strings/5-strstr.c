#include "main.h"
/**
 * _strstr -  function that locates a substring.
 * @haystack: initial string
 * @needle: substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, c;

	while (*(haystack + i) != '\0')
	{
		c = i;
		j = 0;
		while (*(needle + j) == *(haystack + i) &&
			*(haystack + i) != '\0' && *(haystack + i) != '\0')
		{
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + c);
		}
		i = c + 1;
	}
	return (0);
}
