#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * Prints the elements of a linked list and returns the number of nodes.
 * @param h: Pointer to the head of the linked list
 * @return: Number of nodes in the linked list
 */

size_t print_listint(const listint_t *h);

/**
 * Adds a new node at the beginning of a linked list.
 * @param head: Pointer to the head of the linked list
 * @param n: Integer value to be added in the new node
 * @return: Pointer to the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n);

/**
 * Frees the memory allocated for a linked list.
 * @param head: Pointer to the head of the linked list
 */

void free_listint(listint_t *head);

/**
 * Checks if a linked list contains a cycle.
 * @param list: Pointer to the head of the linked list
 * @return: 1 if there is a cycle, 0 otherwise
 */

int check_cycle(listint_t *list);

#endif /* LISTS_H */
