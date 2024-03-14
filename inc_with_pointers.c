#include <stdio.h>

int main()
{
    int intarray[5] = {0xa, 0xb, 0xc, 0xd, 0xe};

    int i;
    for(i = 0; i < 5; i++)
        printf("intarray[%d] has value %d - and address @ %x, %p, %d\n", i, intarray[i], &intarray[i], &intarray[i], &intarray[i]);

    int *intpointer = &intarray[3]; //point to the 4th element in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 4th element

    intpointer++; //now increase the pointer's address so it points to the 5th elemnt in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 5th element
    int j = &intarray[1];
    printf("%p", 5 * j);

    return 0;
}
