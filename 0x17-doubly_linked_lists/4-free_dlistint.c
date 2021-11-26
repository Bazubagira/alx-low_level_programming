#include "lists.h"

/**
 * free_dlistint - frees a linked dlist_t list.
 * @head: the head of the dlist_t list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
