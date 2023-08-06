#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    myNumbers[0] = 5;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    // Declare an array of four integers:
    int mynum[4];

    // Add elements
    mynum[0] = 25;
    mynum[1] = 50;
    mynum[2] = 75;
    mynum[3] = 100;

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}}; // Multi Dimensional Matrix (Array)

    return 0;
}