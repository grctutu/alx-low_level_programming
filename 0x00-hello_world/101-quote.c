#include <stdio.h>

#include <unistd.h>

/**
 * main - Entry point"This is the entry point
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)

{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",

			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));

	return (1);

}
