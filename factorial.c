#include <stdio.h>
int PI = 3.14;

int main(){
    int a, sum=1;
    for(a = 5; a > 0; a--){
        sum *= a;
    }

    {
        int b = 10;
        printf("Factorial Of %f\n", b);
        printf("Factorial Of %f\n", a);
    }

    printf("Factorial Of %f\n", a);

    return 0;
}