#include "main.h"

/**
 *_strlen -checks the length of the string
 *@s: sting for checking
 *Return: length of string if integer type
 **/
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
