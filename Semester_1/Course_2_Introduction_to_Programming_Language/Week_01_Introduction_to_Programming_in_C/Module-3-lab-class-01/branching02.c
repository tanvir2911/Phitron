/*
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is greater than %d.\n\a", x,y);
    }
    else
    {

        if(x<y)
        {
           printf("%d is less than %d.\n\a", x, y);
        }
        else
        {
            printf("%d and %d are equal numbers.\n\a",x,y);

        }
    }

    return 0;
}
*/

#include <stdio.h>
int main()
{
    int x,y;
    printf("Please enter two numbers: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is greater than %d.\n\a",x,y);
    }
    else if(x<y)
    {
        printf("%d is less than %d.\n\a",x,y);
    }
    else
    {
        printf("%d and %d both are equal numbers.\n\a",x,y);
    }

    return 0;
}
