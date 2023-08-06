#include <stdio.h>

struct operator
{
    int type;
    union
    {
        int intNum;
        float floatNum;
        double doubleNum;
    }; // no name! // if using name, op.NAME.___
};

int main()
{
    struct operator op;
    op.type = 0; // int
    // intNum is part of the union, but since it's not named you access it directly off the struct itself
    op.intNum = 352;
    printf("operator");    
    return 0;
}