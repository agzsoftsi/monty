#include "monty.h"

/**
 * err - err function
 * @stack: heade
 * @x: integer
 * Return: nothing
 */
void err(stack_t **stack, unsigned int x)
{
	dprintf(2, "L%u: unknown instruction %s\n", x, hola.linea);
	free(hola.linea);
	fclose(hola.fil);
	free_l(stack);
	if (stack)
	{
	}
	exit(EXIT_FAILURE);
}
