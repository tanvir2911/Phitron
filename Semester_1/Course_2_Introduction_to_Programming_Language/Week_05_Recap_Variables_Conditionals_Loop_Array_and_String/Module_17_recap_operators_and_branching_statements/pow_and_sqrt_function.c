#include<stdio.h>
#include<math.h>
int main()
{
    int a=7,x=5,b=64,power,square_root;

    power = pow(a,x);

    square_root = sqrt(b);

    printf("The power of %d^%d is %d\n",a,x,power);

    printf("The square root of %d is %d\n",b,square_root);

    return 0;
}
