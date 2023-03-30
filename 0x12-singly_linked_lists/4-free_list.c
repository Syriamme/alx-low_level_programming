#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the list
 *
 */
void free_list(list_t *head) /* The function free_list takes a pointer */
				/* to a list_t as its parameter */
{
	list_t *tmp; /* This function creates a temp file to a */
			/* list_t called tmp */

	tmp = head; /* This sets tmp to point to the same thing */
		    /* head is point to */
	/* The function enters a while loop that will run as long */
	/* as head is not NULL*/
	while (head)
	{
		head = head->next;
		free(tmp->str); /* Frees the str that tmp points to */
		free(tmp); /* Frees the memory that tmp points to */
		tmp = head; /* Sets tmp to point to the same thing */
			    /* that heads points to and returns nothing */

	}
}
