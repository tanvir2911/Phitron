
// C program to demonstrate
// a logical error
#include <stdio.h>

int main()
{
  int i;
  for(i = 0; i <= 5; i++);
  {
    printf("Hello Phitron!");
  }
    return 0;
}
//Even if the syntax and other factors are correct,
//we may not get the desired results due to logical issues.
//These are referred to as logical errors. We sometimes put a
//semicolon after a loop, which is syntactically correct but results
//in one blank loop. In that case, it will display the desired output.
