/*
 * File: 0-print_dlistint.c
 * 
 */

#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list.
 * @h: the head of dlistint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t nodes = 0;

  while (h)
    {
      nodes++;
      printf("%d\n", h->n);
      h = h->next;
    }

  return (nodes);
}
