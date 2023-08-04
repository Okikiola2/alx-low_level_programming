#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @num: first number
 * @num2: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int num, unsigned long int num2)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = num ^ num2;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}
