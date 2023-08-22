#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	/* Test 1 */
	len = _printf("%r");
	len2 = printf("%r");
	fflush(stdout);
	if (len != len2)
	{
		printf("[1]: Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
}

