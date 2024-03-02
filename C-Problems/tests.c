#include<stdio.h>
int fact(int num) {
    return (num > 0 ? num * fact(num - 1 ) : 1);
}
int main(){
  printf("%d", fact(6));
  return 0;
}