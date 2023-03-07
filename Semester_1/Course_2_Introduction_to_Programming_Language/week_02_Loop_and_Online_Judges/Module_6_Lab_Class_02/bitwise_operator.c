#include <stdio.h>
int main()
{
    int a=5, b=6;

    printf("Here is some bit wise operation:\n");
    printf("%d AND(&) %d is %d\n",a,b,a&b);
    printf("%d OR(|) %d is %d\n",a,b,a|b);
   // printf("%d NOT(~) %d is %d\n",a,b,a~b);
    printf("%d XNOR(^) %d is %d\n",a,b,a^b);

    return 0;
}
