#include <stdio.h>
#define BOOL char
#define false 0
#define true 1
// #include <stdbool.h>
int main() {

    printf("%d\n",false);
    char * name = "JOHNN";
    printf("%s\n",name);
    char value[] = "HELLO";
    printf("%s\n",value);

    char * pc = &name;
    printf("%p %p\n", *pc, *name);

    return 0;
}