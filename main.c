#include "monty.h"
/**
 * main - entry point for Monty project
 * @ac: number of arguments
 * @av: array of pointers to those arguments
 * Return: Always 0 on success
 */
int main(int ac, char **av)
{
	unsigned int line_number;
	size_t line_len;
	FILE *fp;
	char *line;
	stack_t *list_head;
	int len;

	globals.rval = 0;
	globals.mode = 0;
	globals.cmd = NULL;
	globals.pushval = NULL;
	line = NULL;
	list_head = NULL;
	len = 0;
	line_number = 0;
	line_len = 0;
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((len = getline(&line, &line_len, fp)) != -1)
	{
		line_number++;
		if (!(line[0] == '\n') && !(line[0] == '#') && !_empty_file(line))
		{
			_tokenizer(line); /* tokenize line */
			if (globals.cmd[0] == '#')
				continue;
			globals.rval = _select_opcode(&list_head, line_number);
			if (globals.rval == -1)
			{
				break;
			}
		}
	}
	free(line);
	_free_list(list_head);
	fclose(fp);
	if (globals.rval == -1)
		exit(EXIT_FAILURE);
	else
		exit(EXIT_SUCCESS);
}
