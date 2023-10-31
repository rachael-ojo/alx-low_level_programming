#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;

	return (arr);
}
