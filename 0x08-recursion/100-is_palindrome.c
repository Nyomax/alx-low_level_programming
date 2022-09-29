#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to receive
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * compare - check the code
 * @s: number
 * @l: lenght
 * Return: Always 0.
 */
int compare(char *s, int l)
{
	if (l <= 0)
		return (1);
	if (*s == *(s + (l - 1)))
		return (compare(s + 1, l - 2));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input char
 * Return: int
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (compare(s, l));
}
