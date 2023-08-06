#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void vov()
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = vowels;
    int i;

    // Print the addresses
    for (i = 0; i < 6; i++)
    {
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    // Print the values
    for (i = 0; i < 6; i++)
    {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }
}

int main()
{
    int nrows = 2;
    int ncols = 5;
    int i, j;

    // Allocate memory for nrows pointers
    char **pvowels = (char **)malloc(nrows * sizeof(char *));

    // For each row, allocate memory for ncols elements
    pvowels[0] = (char *)malloc(ncols * sizeof(char));
    pvowels[1] = (char *)malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++)
    {
        for (j = 0; j < ncols; j++)
        {
            printf("%c ", pvowels[i][j]);
        }

        printf("\n");
    }

    // Free individual rows
    free(pvowels[0]);
    free(pvowels[1]);

    // Free the top-level pointer
    free(pvowels);

    vov();
    return 0;
}