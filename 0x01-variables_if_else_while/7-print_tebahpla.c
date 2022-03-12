#include <stdio.h>
/**
 * main- Prints the alphabet in reverse
 * Return: o on success
 */
int main(void)
{
char c = 'z';

while (c >= 'z')
{

putchar(c);
c--;
}
putchar('\n');
return(0);
}
