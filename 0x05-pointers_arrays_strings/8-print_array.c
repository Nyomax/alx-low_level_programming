#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer to first int
 * @n: pointer to second int
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int num = 0;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
			printf(", ");
	}
	printf("\n");
}
