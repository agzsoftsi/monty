#include "monty.h"
/**
 * push_node_mode - checks what mode it is (stack/queue) and calls the right
 * push node function depending on the mode
 * also checks argument and converts it to integer to be passed to push node
 * @head: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void push_node_mode(stack_t **head, unsigned int line_number)
{
	int n;

	if (!globals.push_val || !is_int(globals.push_val))
	{
		printf("L%u: usage: push integer\n", line_number);
		globals.retval = -1;
		return;
	}
	n = atoi(globals.push_val);
	if (globals.mode == 0)
		push_node(head, n);
	else
		push_node_end(head, n);
}
