#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char lc;

for (num = '0'; num <= '9'; num++)
putchar(num);
for (lc = 'a'; lc <= 'f'; lc++)
putchar(lc);
putchar('\n');

return (0);
}
