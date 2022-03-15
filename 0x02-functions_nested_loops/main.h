#include "_putchar.c"
/**
 * main- prints_putchar followed by a new line
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 1)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
