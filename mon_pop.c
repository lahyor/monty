#include "monty.h"

/**
 * m_pop - print top node on stack
 * @head: pointer to pointer to the first node
 * @count: line counter
 * Return: none
 */

void m_pop(stack_t **head, unsigned int count)
{
	stack_t *l;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	l = *head;
	*head = l->next;
	free(l);
}
