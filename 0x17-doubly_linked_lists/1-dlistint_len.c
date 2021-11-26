/*
 * File: 1-dlistint_len.c
 *
 */

#include "lists.h"

/**
 * dlistint_len - counts the number of elements in linked dlistint_t list.
 * @h: the head of the dlistint_t list.
 *
 * Return: number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t nodes = 0;

  while (h)
    {
      nodes++;
      h = h->next;
    }
  return (nodes);
}
