#include <stdio.h>
int main()
{
    int number;
    printf("Enter your marks to see the grade: ");
    scanf("%d",&number);

    if(number>=0 && number<=32)
    {
        printf("F");
    }
    else if(number>32 && number<=39)
    {
        printf("D");
    }
    else if(number>39 && number<=49)
    {
        printf("C");
    }
    else if(number>49 && number<=59)
    {
        printf("B");
    }
    else if(number>59 && number<=69)
    {
        printf("A-");
    }
    else if(number>69 && number<=79)
    {
        printf("A");
    }
    else if(number>79 && number<=100)
    {
        printf("A+");
    }
    else
    {
        printf("Number out of range!\a");
    }

    return 0;
}
