#include<stdio.h>

void pass_by_value(int x)
{
    x=10;
}

void pass_by_reference(int* x)
{
    *x=10;
}

int main()
{
    int a = 50;

    pass_by_value(a); // in pass by value we are passing value of the variable
    printf("%d\n",a);

    pass_by_reference(&a); // in pass by reference we are passing the address of the variable.

    printf("%d\n",a);

    return 0;
}
