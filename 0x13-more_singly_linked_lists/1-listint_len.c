#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: head node pointer
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t list;
	/*variable declaration*/
	list = 0;
	while (h)
	{
		list++;
		h = h->next;
	}
	return (list);
}
