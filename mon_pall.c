#include "monty.h"

/**
 * m_pall - prints the stack
 * @head: stack head
 * @count: no used
 * Return: no return
 */

void m_pall(stack_t **head, unsigned int count)
{
	stack_t *l;
	(void)count;

	l = *head;
	if (l == NULL)
		return;
	while (l)
	{
		printf("%d\n", l->n);
		l = l->next;
	}
}
