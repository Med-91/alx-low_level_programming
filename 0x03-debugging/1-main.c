#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10) 		/* this part is causing an infinite loop. */
	{			/* this part is causing an infinite loop. */
		putchar(i);	/* this part is causing an infinite loop. */
	}			/* this part is causing an infinite loop. */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
