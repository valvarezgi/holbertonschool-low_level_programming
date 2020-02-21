#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: is the array
 * @n: is the number of elements of the array
 * Returns: a reverse array
 */

void reverse_array(int *a, int n)
{
int i;
int temporal;

i = 0;
n = n - 1;
while (i <= n)
{
temporal = a[i];
a[i] = a[n];
a[n] = temporal;
i++;
n--;
}
}
