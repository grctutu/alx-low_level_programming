#include 'main.h'
/**
 *print_alphabet- prints lower case alphabets
 * Return; nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
