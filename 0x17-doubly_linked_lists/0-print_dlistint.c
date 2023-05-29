#include <stdio.h>
#include "lists.h" // header

size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0; // Variable to keep track of the number of nodes

    // Traverse the list and print the elements
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }

    return node_count;
}
