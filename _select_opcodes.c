#include "monty.h"
/**
 * find_opcode - finds the opcode
 * @head: Pointer to the list
 * @line_number: number of lines in the file
 * Return: -1 on failure
 */
int _select_opcode(stack_t **head, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"push", push_node_mode},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (opcodes[i].opcode != NULL)
	{
		if (strncmp(globals.cmd, opcodes[i].opcode,
					strlen(globals.cmd)) == 0)
		{
			opcodes[i].f(head, line_number);
			return (globals.rval);
		}
		i++;
	}
	printf("L%u: unknown instruction %s\n", line_number, globals.cmd);
	globals.rval = -1;
	return (globals.rval);
}
