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
    else if(b>a && b>c)
    {
        printf("B is bigger.\n\a");

    }
    else if(a==b && a==c)
    {
        printf("They are equal.\n\a");
    }
    else
    {
        printf("C is bigger.\n\a");
    }

    return 0;
}
