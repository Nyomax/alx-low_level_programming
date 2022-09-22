#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer of array int
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int aux = 0;
	int b = 0;
	int c = 0;
	int *init, *final;

	init = a;
	final = a;
	n--;
	while (b < n)
		b++;
	while (c <= b)
	{
		aux = *(init + c);
		*(init + c) = *(final + b);
		*(final + b) = aux;
		c++;
		b--;
	}
}
