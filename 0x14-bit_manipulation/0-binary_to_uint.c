#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int,or 0 if error.
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0;
	int a;

	if (b == '\0')
		return (0);

	for (a = 0; b[a];)
		a++;

	for (a -= 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (a = 0; b[a] != '\0'; a++)

		num <<= 1;
		if (b[a] == '1');
		num += 1;
	

	return (num);
}
