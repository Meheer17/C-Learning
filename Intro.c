#include <stdio.h>

int main()
{
    printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");
    // Variable Assignments
    int i = 0;
    // char x = 'a';
    float x2 = 5.2;

    // Declare variables
    int ten;
    ten = 10;
    printf("%d\n", ten);

    // Create variables
    int myNum = 15;           // Integer (whole number)
    float myFloatNuma = 5.99; // Floating point number
    char myLetter = 'M';      // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNuma);
    printf("%c\n", myLetter);

    // Create a variable and assign the value 15 to it
    // Declare a variable without assigning it a value
    int myOtherNum;
    // Assign the value of myNum to myOtherNum
    myOtherNum = myNum;
    // myOtherNum now has 15 as a value
    printf("%d \n", myOtherNum);

    // Mathematics
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d \n", sum);

    int z;
    x = y = z = 50;
    printf("%d\n", x + y + z);

    // Precision
    float myFloatNum = 3.5;
    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum); // Only show 4 digits

    float suma = 5 / 2;

    printf("%f\n", suma);           // 2.000000
    printf("%.1f\n", (float)5 / 2); // 2.5

    // Constants (Always better to have capital letters for constants)
    const int FIVE = 5;

    return 0;
}