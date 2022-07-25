#include "main.h"
#include <stdlib.h>

/**
*_strdup - Returns a pointer to duplicate  space in memory.
*@str: The string to be duplicated.
*Return:  A pointer
*/
char *_strdup(char *str)
{
char *s;
int i, j = 0;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
j++;
s = malloc(sizeof(char) * (j + 1));
if (s == NULL)
return (NULL);
for (i = 0; str[i]; i++)
s[i] = str[i];
s[j] = '\0';
return (s);
}
