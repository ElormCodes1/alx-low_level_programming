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
	if (str == NULL)
		return (NULL);
	input = malloc(sizeof(str));
	for (i = 0; i <= sizeof(str); i++)
		input[i] = str[i];
	return (input);
}
