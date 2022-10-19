#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * return: Always return zero
 */

void print_alphabet(void);
{
	char c;


	for (c = 'a'; c <= 'z'; c++)
	{

		putchar(c);

	}

	putchar("\n");
	return (0);
}
