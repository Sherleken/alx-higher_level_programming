#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list that is being check
 * Return: 1 if the list has a cycle, otherwise 0
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	if (list == NULL)
		return (0);

	while (fast && slow && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
