#include "lists.h"

/**
 * add_nodeint_end -  new node at the end of the list
 * @head: double pointers  head
 * @n:  nodes to be added
 * Return:  NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *newnode, *temp;

		newnode = (listint_t *)malloc(sizeof(listint_t));

		if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;


	if (*head == NULL)
		*head = newnode;

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
