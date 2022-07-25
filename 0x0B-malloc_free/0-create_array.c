#include "main.h"

/**
*create_array  - creating array of chars and initialiing
*@size: size of array to be initialized
*@c: character to initialize an arrey.
*Return: a pointer to an array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
