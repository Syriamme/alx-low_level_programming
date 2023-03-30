#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0; /*A variable called nodes of type size_t*/

	/* While the list is not empty, print string and its length */
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++; /*increment the number of nodes*/
		h = h->next; /*move to the next node*/
	}

	return (nodes); /*Return the number of nodes*/
}
