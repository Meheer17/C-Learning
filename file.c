#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    if (fptr == NULL)
    {
        printf("Not able to open the file.");
    }

    // fprintf(fptr, "Hello, world\n");  //Append Texts to the file.

    char myString[100];

    // fgets(myString, 100, fptr) //This Reads only the first line of the text file.
    while (fgets(myString, 100, fptr))
    {
        printf("%s", myString);
    }
    printf("%s", myString);
    fclose(fptr);
    return 0;
}