#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *ast = head;

	if (!head)
		return (NULL);

	while (low && ast && ast->next)
	{
		ast = ast->next->next;
		low = low->next;
		if (ast == low)
		{
			low = head;
			while (low != ast)
			{
				low = low->next;
				ast = ast->next;
			}
			return (ast);
		}
	}

	return (NULL);
}
