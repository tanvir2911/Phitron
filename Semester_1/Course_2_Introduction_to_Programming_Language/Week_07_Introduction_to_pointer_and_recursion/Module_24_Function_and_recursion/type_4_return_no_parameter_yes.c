#include<stdio.h>

int take_radius()
{
    int r;
    printf("Please enter the radius of a circle: ");
    scanf("%d",&r);
    return r;
}

void calculate_area(int radius)
{
    float area = 3.14159*radius*radius;
    printf("Area of the circle is %f\n",area);
}

int main()
{
    int r;
    r = take_radius();

    calculate_area(r);



    return 0;
}

