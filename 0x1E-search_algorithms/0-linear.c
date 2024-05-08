#include <stdio.h>
#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
    {
        printf("Invalid input: array is NULL or size is 0\n");
        return -1;
    }

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            printf("Found %d at index: %lu\n", value, i);
            return i;
        }
    }

    printf("%d not found in the array\n", value);
    return -1;
}
