#include "lists.h"
/**
 * print_listint - prints all the elements
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t list;
	/*variable declared*/
	list = 0;
	while (h)
	{
		list++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (list);
}
