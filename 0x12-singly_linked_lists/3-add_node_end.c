#include "lists.h"
/**
 * add_node_end - adds node at the end
 * @head: head node
 * @str: str for new list
 * @Return: 0 always success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new;
	list_t *c_node;
	unsigned int i;
	/*variables*/
	i = 0;
	*c_node = *head;
	while (str[i])
		i++;
	node_new = malloc(sizeof(list_t));
	if (!node_new)
		return (NULL);
	node_new->str = strdup(str);
	node_new->i = i;
	node_new->next = NULL;
	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}
	while (c_node->next)
		c_node = c_node->next;
	c_node->next = node_new;
	return(node_new);
}
