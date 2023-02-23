#include "holberton.h"
#include <stdio.h>

#include "main.h"
/**
 * _isdigit - Check if paramter c represents an digit.
 * @c: Int representing an ascii character
 * Return: Return 1 if it is a digit otherwise return 0.
 * _isdigit - Check for a digit (0-9)
 * @c: Integer holding the character
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
}
