#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter three values for the sides of a triangle to see if it can form a triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
