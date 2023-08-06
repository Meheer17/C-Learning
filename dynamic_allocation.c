#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
} person;

int main()
{
    person *myperson = (person *) malloc(sizeof(person));
    myperson->name = "John";
    myperson->age = 10;
    printf("%d %s\n", myperson -> age, myperson -> name);
    printf("%p\n", myperson);
    free(myperson);

    // printf("%d %s\n", myperson -> age, myperson -> name);
    //Throws a Segmentation Violation Error.
    
    return 0;
}