#include "monty.h"

/**
 * _free_list - free a list
 * @head: is the linked list to free
 */
void _free_list(stack_t *head)
{
	stack_t *temp;

	while (1)
	{
		if (head == NULL)
			break;
		temp = head;
		head = temp->next;
		free(temp);
	}
}
