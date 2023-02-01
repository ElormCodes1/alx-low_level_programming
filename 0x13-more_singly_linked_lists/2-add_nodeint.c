#include "lists.h"
/**
 * add_nodeint - adds a node to begining of linked list
 * @head: pointer to th first node of linked list
 * @n: value of the head
 */
listint_t *add_node(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->next = &head;
	new->n = n;
	return (&new);
}
