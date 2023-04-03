#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *position;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		position = head;
		head = head->next;
		free(position);
	}
	head = '\0';
}
