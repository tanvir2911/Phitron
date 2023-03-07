#include <stdio.h>
int main()
{
    int x,y;
    printf("Please enter your original marks and bonus marks you achieved to see if it reaches 100 or not: ");
    scanf("%d%d",&x,&y);

    if(x+y>=100)
    {
        printf("Yes!");
    }
    else
    {
        printf("No!");
    }

    return 0;
}
