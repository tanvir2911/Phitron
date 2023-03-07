#include <stdio.h>
int main()
{
    //finding the largest of the three numbers

    int a,b,c;
    printf("Enter Three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is the largest number.\n\a",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest number.\n\a",b);
    }
    else
    {
        printf("%d is the largest number.\n\a",c);
    }

    return 0;
}
