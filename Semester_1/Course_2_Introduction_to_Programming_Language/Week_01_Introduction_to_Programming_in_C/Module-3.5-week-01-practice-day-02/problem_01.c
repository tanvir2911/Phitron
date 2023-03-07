#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers in memory A and B: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("A is bigger.\n\a");
    }
    else
    {
        if(b>a)
        {
            printf("B is bigger.\n\a");
        }
        else
        {
            printf("They are equal.\n\a");
        }
    }

    return 0;
}
