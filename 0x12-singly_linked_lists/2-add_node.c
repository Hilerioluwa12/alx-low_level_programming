#include "lists.h"
#include <string.h>

/**
 *add_node - function to add item at the beginning of a linked_list
 *@head: head pointer to linked_list
 *@str: string to add
 *
 *Return: address of new element
 */


list_t *add_node(list_t **head, const char *str)
{
i	list_t *nw_nod;
	unsigned int x = 0;

	if (str == NULL)
	return (NULL);

	nw_nod = malloc(sizeof(list_t));
	if (nw_noe == NULL)
	return (NULL);

	nw_nod->str = strdup(str);
	if (nw_nod->str == NULL)
	{
		free(nw_nod);
		return (NULL);
	}

	while (nw_nod->str[x])
	{
		x++;
	}
	nw_nod->len = x;
	nw_nod->next = *head;
	*head = nw_nod;

	return (nw_nod);
}
