#include "main.h"
/**
*free_grid - allocates an arrey onf int
*@grid: arrey that is freed
*@height: height of grid
*Return: free grid
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
