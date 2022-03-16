#include '1-alphabet.c'
/**
 *print_alphabet- prints lower case alphabets
 * Return; nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
