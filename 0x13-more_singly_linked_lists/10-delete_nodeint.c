#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that delete the node at
 * specified index from list
 * @head: a pointer to listint_t structure
 * @index: the index of node to delete
 * Return: 1 if succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *dnode;
unsigned int i = 1;

if (*head == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = (*head)->next;
free(temp);
}
else
{
while (i < index)
{
temp = temp->next;
if (temp == NULL)
return (-1);
i++;
}
dnode = temp;
dnode = dnode->next;
temp->next = dnode->next;
free(dnode);
}
return (1);
}