#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char which initializes the array
 * return: char value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *input;

	if (size == 0)
		return (NULL);
	input = malloc(sizeof(char) * size);
	if (input == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		input[i] = c;
	}
	return (input);
}
