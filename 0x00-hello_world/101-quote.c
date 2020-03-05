#include <stdio.h>
#include <unistd.h>

/**
 *main - program that prints a quote to the standard error
 *Return: 1
 */

int main(void)
{
	int i;

i = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", i);
		return (1);
}
