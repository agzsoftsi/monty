#include "monty.h"
/**
 * _tokenizer - tokenizes the line from file
 * @file_line: pointer to line from file
 */
void _tokenizer(char *file_line)
{
	char *delimiter = "\t\n ";

	globals.cmd = strtok(file_line, delimiter);
	globals.pushval = strtok(NULL, delimiter);
}
