#include <stdio.h>
int main()
{
    int number;
    printf("Please enter a non-negative number if it is an even or odd number: ");
    scanf("%d",&number);

    if(number%2==1)
    {
        printf("It's an odd number.\n\a");
    }
    else
    {
        printf("It's an even number.\n\a");
    }

    return 0;
}
