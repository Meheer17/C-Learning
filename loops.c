#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // While loop
    int i = 0;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }

    // Do While Loop
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 200);

    // For Loop
    for (int c = 0; c <= 100; c++)
    {
        printf("%d\n", c);
    }

    // Break And Continue...
    int x;

    for (x = 0; x < 10; x++)
    {
        if (i == 4)
        {
            break; // Or Continue
        }
        printf("%d\n", x);
    }

    return 0;
}