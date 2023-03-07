#include<stdio.h>

int take_radius()
{
    int r;
    printf("Please enter the radius of a circle: ");
    scanf("%d",&r);
    return r;
}

int main()
{
    int r;
    r = take_radius();

    float area = 3.14159*r*r;

    printf("Area of the circle is %f\n",area);

    return 0;
}

