#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function that is executed
 * @h: name of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
