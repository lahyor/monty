#include "monty.h"

/**
 * m_mod - compute modulos of two elements in stack
 * @head: pointer to pointer to first node
 * @count: line counter
 * Return: none
 */

void m_mod(stack_t **head, unsigned int count)
{
	stack_t *l;
	int len = 0, twp;

	l = *head;
	while (l)
	{
		l = l->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	l = *head;
	if (l->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	twp = l->next->n % l->n;
	l->next->n = twp;
	*head = l->next;
	free(l);
}
