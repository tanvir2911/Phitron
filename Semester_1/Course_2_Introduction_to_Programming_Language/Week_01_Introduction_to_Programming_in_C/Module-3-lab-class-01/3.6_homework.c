#include <stdio.h>
int main()
{
    int x,a,b;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&a,&b);

    if(x%2==0)
    {
        printf("The summation of %d and %d is %d", a,b,a+b);
    }
    else
    {
        printf("The subtraction of %d and %d is %d", a ,b ,a-b);
    }

    return 0;
}
