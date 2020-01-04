#include "monty.h"
/**
 * tokenize - toknizes the line from file
 * @line: pointer to line from file
 * Return: none
 */
void tokenize(char *line)
{
	char *delim = "\t\n ";

	globals.command = strtok(line, delim);
	globals.push_val = strtok(NULL, delim);
}
