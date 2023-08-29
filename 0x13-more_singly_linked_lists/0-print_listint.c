#include "lists.h"

/**
 * print_list int -This function prints all the elements of a linked list
 * @h: All linked list of type list int_t to print
 * Return: Always the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
