#include <stdio.h>
#include <string.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
    char myName[30];
};

int main()
{
    // Create different struct variables
    struct myStructure s1;
    struct myStructure s2;

    // Assign values to different struct variables
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myName, "John Doe"); // We need to use strcpy here as direct will give error.

    s2.myNum = 20;
    s2.myLetter = 'C';
    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myName);

    // Simpler Method
    struct myStructure s3 = {13, 'B', "Alpha"};

    // Print values
    printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myName);

    // Copy struct 
    struct myStructure s4;
    s4 = s3;
    printf("%p\n", s4);

    return 0;
}