#include 'alx.h'
/**
 *print_alphabet- prints the english alphabet from a-z
 * Return; nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
