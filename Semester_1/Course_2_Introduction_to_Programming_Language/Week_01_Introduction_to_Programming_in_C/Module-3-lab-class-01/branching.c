#include<stdio.h>
int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("The number is an even number.\n\a");
    }
    else
    {
        printf("The number is an odd number.\n\a");
    }
    return 0;
}
