#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
    
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s\n", greetings);
    // Outputs Jello World! instead of Hello World!
    // Shows that we can manipulate the String if its stored as array.
    char* stre = "Hello";
    // stre[0] = "JE"; // Thsi gives an Error as this shows we cant manipulate the String.
    printf("%s\n", stre);



    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));   // 26
    printf("%d", sizeof(alphabet));   // 27

    char alphbet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphbet));   // 26
    printf("%d", sizeof(alphbet));   // 50



    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);
    // Print str1
    printf("%s", str1);


    // Copy str1 to str2
    strcpy(str2, str1);
    // Print str2
    printf("%s", str2);


    char satr1[] = "Hello";
    char satr2[] = "Hello";
    char satr3[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(satr1, satr2));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(satr1, satr3));  // Returns -4 (the strings are not equal)

    return 0;
}