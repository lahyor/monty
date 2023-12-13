#include "monty.h"

/**
 * m_pint - print top node on stack
 * @head: pointer to pointer of first node
 * @count: line counter
 * Return: none
 */

void m_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
