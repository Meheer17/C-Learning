#include <stdio.h>
#include <string.h>

typedef struct {
  int myNum;
  char myLetter;
  char myString[30];
} myStructure;

int main() {
  // Create a structure variable and assign values to it
  myStructure s1 = {13, 'B', "Some text"};
  // Modify values
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");
  // Print values
  printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
  return 0;
} 