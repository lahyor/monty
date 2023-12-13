#include "monty.h"

/**
 * m_add - add first two elements of the stack
 * @head: pointer to pointer of the first node
 * @count: line counter
 * Return: none
 */

void m_add(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	l = *head;
	twp = l->n + l->next->n;
	l->next->n = twp;
	*head = l->next;
	free(l);
}
