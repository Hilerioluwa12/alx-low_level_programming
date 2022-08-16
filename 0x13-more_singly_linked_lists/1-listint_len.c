#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements in a linked
 * @h: head of lisr
 *
 * Return: length of node.
 */

size_t listint_len(const listint_t *h)
{
	size_t lnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		lnodes++;
	}
	return (lnodes)
}
