#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Determine if the last digit of a random number
 * is greater than or less than 5, or is zero
 * Return: 0 on success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there*/
if (n < 0)
{
	printf("%d is positive\n", n);
}
else if (n > 0)
}
	 printf("%d is zero\n", n);
}
else
{
	  printf("%d is negative\n", n);
}
return (0);
}
