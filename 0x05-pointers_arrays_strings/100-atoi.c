#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: int
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	signum = 1;

	while ((s[a] < '0' || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			signum *= -1;
		a++;
	}
	while ((s[a] >= '0' && s[a] <= '9') && s[a] != 0)
		if (b >= 0)
			b = b * 10 - (s[a] - '0');
			a++;
		else
			b = b * 10 - (s[a] - '0');
			a++;
	signum *= -1;
	return (b * signum);
}

