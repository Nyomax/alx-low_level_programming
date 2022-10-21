#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all elements of a list.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		i++;
		temp = temp->next;
	}
	return (i);
}
