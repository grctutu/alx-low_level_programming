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
int n:
char last[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there*/
if (n < 0)
{
	printf("%d is %s\n", n, "negative");
}
else if (n > 0)
}
	 printf("%d is %s\n", n, "positive");
}
else
{
	  printf("%d is %n", n, "zero");
}
return (0);
}
