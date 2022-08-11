#include "lists.h"

/**
 *list_len - return number of elements in list
 *@hd: pointer to head
 *
 *Return: number of elements
 */

size_t list_len(const list_t *hd)
{
unsigned int count = 0;
const list_t *tmp;

tmp = hd;

while (tmp != NULL)
{
count++;
tmp = tmp->next;
}
return (count);
}
