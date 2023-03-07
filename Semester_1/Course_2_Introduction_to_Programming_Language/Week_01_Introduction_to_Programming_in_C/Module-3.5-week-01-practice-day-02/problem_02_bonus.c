#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers in memory A, B and C to see which is bigger: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("A is bigger.\n\a");
    }
    else if(a==b && a>c)
    {
        printf("A and B both are bigger.\n\a");
    }
    else if(b>a && b>c)
    {
        printf("B is bigger.\n\a");
    }
    else if(b==c && b>a)
    {
        printf("B and C both are bigger.\n\a");
    }
    else if(c>a && c>b)
    {
        printf("C is bigger.\n\a");
    }
    else if(a==c && a>b)
    {
        printf("A and C both are bigger.\n\a");
    }
    else
    {
        printf("They all are equal.\n\a");
    }

    return 0;
}

