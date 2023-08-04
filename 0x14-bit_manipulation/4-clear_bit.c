#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0
 * @num: pointer to the number
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num = (~(1UL << index) & *num);
	return (1);
}
