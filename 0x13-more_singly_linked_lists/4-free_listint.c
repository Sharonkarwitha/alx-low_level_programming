#include "lists.h"


/**
 * free_listint - frees linked list
 * @head: listint_t list to be freed
 * Return : no specifications
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
