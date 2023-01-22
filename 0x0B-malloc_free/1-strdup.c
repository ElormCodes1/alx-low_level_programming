#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies input string into new location
 * @str: input string that is copied
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *input;
	long unsigned int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	while (str[count])
		++count;
	input = malloc(sizeof(char) * count);
	for (i = 0; i <= count; i++)
		input[i] = str[i];
	return (input);
}
