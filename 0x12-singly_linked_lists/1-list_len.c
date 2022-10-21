#include "lists.h"
/**
 * list_len - function that calculate the number of elements.
 * @h: Pointer to a list.
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
