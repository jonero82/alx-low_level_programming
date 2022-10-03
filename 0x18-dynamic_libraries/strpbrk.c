#include "main.h"

/**
 *_strpbrk - Searches a string for specified character.
 *@s: The string to be searched.
 *@accept: The character that marches str2.
 *Return: string s that matched character
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
