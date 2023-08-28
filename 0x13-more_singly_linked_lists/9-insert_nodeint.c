#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: pointer to the address of head node
 * @idx: position to insert new node
 * @n: data of new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy = *head;
	unsigned int node_el;
	/*variable declarations*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = copy;
		*head = new_node;
		return (new_node);
	}
	for (node_el = 0; node_el < (idx - 1); node_el++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new_node->next = copy->next;
	copy->next = new_node;
	return (new_node);
}
