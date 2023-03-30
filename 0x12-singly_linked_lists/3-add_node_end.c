#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 *
 * @head: A pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t)); /* Allocate memory to a new node */
	if (new == NULL)
		return (NULL); /* If the new node is NULL, return NULL */

	dup = strdup(str); /* Duplicate the string as a parameter */
	if (str == NULL)
	{
		free(new); /* If the string is NULL, free the new node */
			     /* and return NULL */
		return (NULL);
	}

	for (len = 0; str[len];) /* Calculate the length of the string */
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL; /* Set the new node's next pointer to NULL */

	if (*head == NULL) /* If the list is empty, set the head to */
			      /* the new node */
		*head = new;

	else /* Otherwise, set the next pointer of the last node to */
		/* the new node */
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head); /* Return the head of the list */
}
