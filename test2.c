#include <stdio.h>
#include <stdlib.h>

struct person
{
    char *name;
    int age;
};

typedef struct
{
    char *name;
    int age;
} Person;

int main()
{
    struct person *myperson = (struct person *)malloc(sizeof(struct person));
    Person *myperson2 = (Person *)malloc(sizeof(Person));

    myperson->name = "John";
    myperson->age = 27;
    myperson2->name = "Meh";
    myperson2->age = 18;

    printf("%s %d\n", myperson->name, myperson->age);
    printf("%s %d\n", myperson2->name, myperson2->age);

    printf("%d\n", (sizeof(Person)));
    printf("%d\n", (sizeof(struct person)));

    free(myperson);
    free(myperson2);

    return 0;
}