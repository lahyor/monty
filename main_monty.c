#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - it interpretes the monty code
 * @argc: monty code arguments
 * @argv: monty code vector
 * Return: Always 0 on success
 */

int main(int argc, char **argv)
{
	char *content;
	FILE *file;
	size_t life = 0;
	ssize_t read_line = 1;
	stack_t *stack = 0;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &life, file);
		bus.content = content;
		count++;
		if (read_line > 0)
		{
			execute(content, &stack, count, file);
			free(content);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}