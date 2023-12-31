#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to the address of head node
 * @n: value of new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *old_node;
	/*pointer variable*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		old_node = *head;
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
	}
	return (*head);
}
