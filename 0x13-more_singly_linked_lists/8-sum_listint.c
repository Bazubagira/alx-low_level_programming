#include "lists.h"

/**
 * sum_listint - a function that sums values from listint_t
 * @head: a pointer listint_t structure
 * Return: the sum of all the data n from list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
