#include "lists.h"
/**
 * listint_len - counts number of elements in a list
 * @h: pinter to a constant variable of type listint_t
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h->next != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
