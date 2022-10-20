#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -prints the alphabet in lower case, followed by new line
 *print_alphabet
 * Return: Always return 0.
 */

void print_alphabet(void)
{
	char ap = 'a';

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		putchar(ap);
	}
	putchar('\n');
}
