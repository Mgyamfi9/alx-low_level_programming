#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head node
 * @index: index of nth node
 * Return: returns the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_el;
	/*variable declaration*/
	for (node_el = 0; node_el < index; node_el++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
