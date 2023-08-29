#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const list_t *h);
{
	count = 0;
	while (h)
	{
		printf("%d", h->data);
		count++;
		h = h->next;
	}

	return (count);
}
