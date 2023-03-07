
// C program to demonstrate
// a linker error
#include <stdio.h>

int Main()
{
  printf("Hello Phitron!");
  return 0;
}
//When the program is successfully compiled and attempting
//to link the different object files with the main object file,
//errors will occur. When this error occurs, the executable is not generated.
//This could be due to incorrect function prototyping, an incorrect header file,
//or other factors.
//If main() is written as Main(), a linked error will be generated.
