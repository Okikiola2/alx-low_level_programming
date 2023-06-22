#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char leta;
	int t;

	t = 0;

	while (t < 10)
	{
		leta = 'a';
		while (leta <= 'z')
		{
			_putchar(leta);
			leta++;
		}
		_putchar('\n');
		t++;
	}
}

