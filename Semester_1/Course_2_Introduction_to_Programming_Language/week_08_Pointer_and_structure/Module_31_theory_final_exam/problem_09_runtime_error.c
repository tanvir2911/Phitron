
// C program to demonstrate
// a runtime error
#include <stdio.h>

// Driver code
int main()
{
  int array[5];
  printf("%d", array[10]);
  return 0;
}
//This type of error occurs while the program is running.
//Because this is not a compilation error, the compilation will be
//completed successfully. These errors occur due to segmentation fault
//when a number is divided by division operator or modulo division operator.
