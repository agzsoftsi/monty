#include "monty.h"
/**
 * _pop - function that deletes the head node
 * @head: pointer to head
 * @line_number: line number in the file with Monty bytecode
 * Return: none
 */
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (!*head)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		globals.rval = -1;
		return;
	}
	temp = *head;
	if (temp->next)
		temp->next->prev = NULL;
	*head = temp->next;
	free(temp);
	globals.rval = 0;
}
