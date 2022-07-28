#include "main.h"
/**
*malloc_checked - Allocates memory using malloc
*@b: number of bytes in  memory
*Return: a pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
