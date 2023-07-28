#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	printf("[");
	while (h != NULL)
	{
		printf("'%s'", h->str);
		count++;
		h = h->next;
		if (h != NULL)
	{
			printf(", ");

	}
	printf("]\n");

	return (count);
}
