#include "lists.h"
/**
 * print_list - prints the elements of list
 * @h: pointer to head list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t number_el;
	/*variable declared*/
	number_el = 0;
	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number_el++;
	}
	return (number_el);
}
