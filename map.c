#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//Memory Address and Pointers
void another()
{
    int myAge = 43;    // An int variable
    int *ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge
    // Output the value of myAge (43)
    printf("%d\n%d\n", myAge, *ptr);
    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);
    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
}

void diff() {
    int myNumbers[4] = {25, 50, 75, 100}; // Array Pointers
    int i;
    for (i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }
    int myNumbears[4] = {25, 50, 75, 100};
    // Get the size of the myNumbers array
    printf("%lu\n", sizeof(myNumbears));
    printf("%d", *myNumbers);
    printf("%d", *(myNumbers + 1));
    printf("%d", *(myNumbers + 2));

    int *ptr = myNumbers;
    int j;

    for (j= 0; j < 4; j++) {
        printf("%d\n", *(ptr + j));
    }
}

int main()
{
    int myAge = 43; // an int variable
    another();
    diff();
    printf("%d\n", myAge);  // Outputs the value of myAge (43)
    printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
    return 0;
}