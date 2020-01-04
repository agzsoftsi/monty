#include "monty.h"

/**
 * _push_node_mode - checks what mode it is (stack/queue) and calls the right
 * push node function depending on the mode
 * also checks argument and converts it to integer to be passed to push node
 * @head: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void _push_node_mode(stack_t **head, unsigned int line_number)
{
int n;

if (!globals.pushval || !_verify_int(globals.pushval))
{
printf("L%u: usage: push integer\n", line_number);
globals.rval = -1;
return;
}
n = atoi(globals.pushval);
if (globals.mode == 0)
_push_node(head, n);
else
push_node_end(head, n);
}
