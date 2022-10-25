#include "lists.h"

/**
 * listint_len - Calculates the length of a list
 * @h: Pointer to the begining of the list
 * Return: Returns the of nodes
 */

size_t listint_len(count listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
