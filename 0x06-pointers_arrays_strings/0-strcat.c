#include "main.h"
#include <stdio.h>

/**
*_strcat - Concatenates two strings
* @dest: First string
* @src: String appended to the first string
* Return: the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int a,b;

a = 0;
for (b = 0; dest[b] != '\0'; b++);
while (src[a] != '\0')
{
dest[b +a] = src[a];
a++;
}
return (dest);
}
