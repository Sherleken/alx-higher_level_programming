#include "lists.h"

/**
 * insert_node - inserts number to sorted singly-linked list.
 * @head: pointer to the head of the linked list.
 * @number: number to insert.
 * Return: NULL, if function failes, otherwise
 * return pointer to new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		*head = new;
		new->next = node;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
