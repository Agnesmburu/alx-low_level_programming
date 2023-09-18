#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function to calculate the length of a string
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
