#include <stdio.h>

#include <stdlib.h>

/**

 * delete_dnodeint_at_index - Deletes the node at the given index of a doubly linked list.

 * @head: A double pointer to the head of the doubly linked list.

 * @index: The index of the node to delete. Index starts at 0.

 *

 * Return: 1 if the deletion is successful, -1 if it fails.

 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{

	if (*head == NULL)		return (-1); /* Empty list */

	dlistint_t *current = *head;

	if (index == 0)

	{

		*head = current->next;

		if (*head != NULL)

			(*head)->prev = NULL;

		free(current);

		return (1);

	}

	for (unsigned int i = 0; current != NULL && i < index; i++)

		current = current->next;

	if (current == NULL)

		return (-1); /* Index out of range */

	current->prev->next = current->next;

	if (current->next != NULL)

		current->next->prev = current->prev;

	free(current);

	return (1);

}
