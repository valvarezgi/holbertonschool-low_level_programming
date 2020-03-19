#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t i;

for (i = 0; i != NULL; i++ )
{
    if(h->str == NULL)
    {
printf("[%d] %s", 0, "(nil)")
    }
    else
    {
    printf("[%d] %s\n", h->len, h->str);
    h = h->next;    
    }

return (i);
}