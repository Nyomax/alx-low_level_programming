#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function that is executed
 * @h: header pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
