#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index position
 * @head: pointer to the address of head node
 * @index: index of node to be deleted
 * Return: 1 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold;
	listint_t *copy = *head;
	unsigned int node_el;
	/*variables*/
	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (node_el = 0; node_el < (index - 1); node_el++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	hold = copy->next;
	copy->next = hold->next;
	free(hold);
	return (1);
}
