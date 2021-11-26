#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of a dlistint_t
 * @head: a pointer to the head of the d listint_t lists.
 * @n: the integer for the new node
 *
 * Return: if the function fails - NULL.
 * Otherwise - the address of new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;

return (new);
}
