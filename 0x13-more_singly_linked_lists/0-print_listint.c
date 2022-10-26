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
	const list_t *tmp;
	unsigned int count = 0;

	tmp = h;
	while (tmp)
	{
		if (tmp->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
