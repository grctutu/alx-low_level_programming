#include <stdio.h>
/**
 * main- Prints numbers 0-9 without using char or printf/puts
 * and putcher 2x max
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
