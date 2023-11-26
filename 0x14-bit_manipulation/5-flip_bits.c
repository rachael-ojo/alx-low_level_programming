#include "main.h"
/**
 * flip_bit function that returns the number of bits you would need
 * to flip to get from oe umber to another
 *
 * @n: first number to compare
 * @m: the secod number to compare
 * Return: the number of bits you would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count ++;
		result = result >> 1;
	}
	return (count);
}
