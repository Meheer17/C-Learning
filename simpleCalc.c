#include <stdio.h>

int main()
{
    char op;
    double first, second;

    printf("Enter the Option (+, -, /, *): ");
    scanf("%c", &op);
    printf("Enter the first and the second number: ");
    scanf("%lf %lf", &first, &second);

    switch (op)
    {
        case '+':
            printf("The sum of %.1lf and %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("The sub of %.1lf and %.1lf = %.1lf", first, second, first - second);
            break;
        case '/':
            printf("The div of %.1lf and %.1lf = %.1lf", first, second, first / second);
            break;
        case '*':
            printf("The mul of %.1lf and %.1lf = %.1lf", first, second, first + second);
            break;
        default: printf("Invalid character");
    }

    return 0;
}