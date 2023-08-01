#include "lists.h"

/**
 * sum_listint - calculates the sum of the data in a listint_t 
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *last = head;

	while (last != NULL) 
	{
		sum += last->n;
		last = last->next;
	}
    
	return sum;
}
