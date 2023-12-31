#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning
 * @head: ponter to head node address
 * @n: value of new node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/*pointer declaration*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
