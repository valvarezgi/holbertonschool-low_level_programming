#include <stdio.h>
/**
 * main - combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = '1';
	}
	putchar('\n');
	return (0);
}
