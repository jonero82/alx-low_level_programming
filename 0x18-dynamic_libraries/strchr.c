#include "main.h"

/**
 *_strchr - Locates a character in a string.
 *@s: string
 *@c: The character to be searched.
 *Return: a pointer to the first occurence.or a NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
