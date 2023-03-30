#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 *
 * @head: A pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t)); /* Allocate memory for a new node */
	if (new == NULL)
		return (NULL); /* If the allocation fails, return NULL */

	dup = strdup(str); /* Copy the new string to a new buffer */
	if (dup == NULL)
	{
		free(new); /* If the string copy fails, free the node and return NULL */
		return (NULL);
	}

	for (len = 0; str[len];) /* Calculate the length of the string */
		len++;

	new->str = dup; /* Set the new node's string and len members */
	new->len = len;
	new->next = *head; /* Set the new node's next member to point */
			      /* to the current head of the list */

	*head = new; /* Set the head of the list to point to the new node */

	return (new); /* Return a pointer to the new node */
}
