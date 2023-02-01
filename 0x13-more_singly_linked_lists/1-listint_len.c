#include "list.h"
/**
 * size_t listint_len - counts number of elements in a list
 * @h: pinter to a constant variable of type listint_t
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;
	listint_t current = NULL;

	while (h->next != NULL)
	{
		counter++;
		h = h->next->next;
	}
	return (counter);
}
