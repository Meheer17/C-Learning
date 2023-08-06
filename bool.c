#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun); // Returns 1 (true)
    printf("%d\n", isFishTasty);      // Returns 0 (false)
    printf("%d\n", 10 > 9);  // Returns 1 (true) because 10 is greater than 9 
    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55 

    // Normal If Else Statements.
    int myAge = 25;
    int votingAge = 18;

    if (myAge > votingAge) {
        printf("Old enough to vote!");
    } else if (myAge < votingAge) {
        printf("Not old enough to vote.");
    } else {
        print("Testing...");
    }

    // Short Hand If. 
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening."); 

    // Switch in C
    int day = 4;

    switch (day) {
    case 1:
        printf("Monday");
        // break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default: // If it doesnt find any match then this will code block will be printed.
        printf("Looking forward to the Weekend");
    };

    return 0;
}