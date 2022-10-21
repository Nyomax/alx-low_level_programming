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
	unsigned int i = 0;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
