#include "main.h"

/**
 *_isupper - checks if  a character is  uppercase
 *@c: parameter
 *Return: 0 if successful
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
