#include "monty.h"

/**
 * _push_node_end - adds a new node at the end of a doubly linked list
 * @head: head pointer
 * @n: new node interger to be added
 * Return: none
 */
void _push_node_end(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *tmp;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		globals.rval = -1;
		return;
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		globals.rval = 0;
		return;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	globals.rval = 0;
}
