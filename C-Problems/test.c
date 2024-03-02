#include <stdio.h>
#include <math.h>

int reversse()
{
    int x;
    printf("\nEnter the number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        printf("%d", x % 10);
        x /= 10;
    }
    printf("\n\n");
    return 0;
}

int PerfectSquare()
{
    int x;
    printf("\nEnter the number: ");
    scanf("%d", &x);
    printf("%d is %s", x, (pow(((int)sqrt(x)), 2)) == x ? "a perfect Square" : "Not a perfect square\n\n");
    return 0;
}

int add1()
{
    int x, new = 0, c = 1;
    printf("\nEnter the number: ");
    scanf("%d", &x);
    new = x;
    while (x != 0)
    {
        new += c;
        c *= 10;
        x /= 10;
    }
    printf("%d\n\n", new);
    return 0;
}

int rhombus()
{
    int x;
    printf("\nEnter the number of rows: ");
    scanf("%d", &x);

    for (int i = 0; i <= x / 2; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i * 2; j++)
            printf("*");
        printf("\n");
    }
    for (int i = x / 2 - 1; i >= 0; i--)
    {
        for (int j = x - i - 1; j > 0; j--)
            printf(" ");
        for (int j = i * 2; j >= 0; j--)
            printf("*");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}

int main()
{
    // int esum = 0, osum = 0;
    // for (int i = 1; i <= 50; i++)
    // {
    //     esum += (i % 2 == 0 ? i : 0 );
    //     osum += (i % 2 == 1 ? i : 0 );
    // }
    // printf("The Even sum is: %d and Odd sum is %d", esum, osum);
    // reversse();
    // PerfectSquare();
    add1();
    // rhombus();
    return 0;
}