#include "main.h"
/**
 * _memset - fill a block of memory with a value for a given number of bytes.
 *@s: A pointer to the memory area you want to fill with a specific value.
 *@b: The value you want to set (as a char).
 *@n: The number of bytes to be changed.
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
