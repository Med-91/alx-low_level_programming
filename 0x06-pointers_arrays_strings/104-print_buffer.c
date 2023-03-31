#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of size bytes of the buffer.
 * @b: input pointer to buffer
 * @size: input buffer size
 */

void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	if (size <= 0)
		printf("\n");
	else
		while (i < size)
		{
			printf("%08x: ", i);
			for (k = 0; k < 10; k += 2)
			{
				if (i + k < size - 1)
				printf("%02x%02x ", b[i + k], b[i + k + 1]);
				else
					printf("     ");
			}
			for (j = 0; j < 10; j++)
			{
				if (i + j == size)
					break;
				if (b[i + j] < 32 || b[i + j] == 127)
					printf(".");
				else
					printf("%c", b[i + j]);
			}
			printf("\n");
			i += 10;
		}
}

