#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: a pointer to a list_t struct
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	/* Creates a variable len of type size_t and initializes it to 0*/
	size_t len;

	len = 0;

	/* The function enters a while loop as long as h is not NULL */
	while (h != NULL)
	{
		++len; /* The function increments len by 1 */
		h = h->next; /* The function sets h to point to the next element */
	}

	return (len); /* The function returns the value of len */
}
