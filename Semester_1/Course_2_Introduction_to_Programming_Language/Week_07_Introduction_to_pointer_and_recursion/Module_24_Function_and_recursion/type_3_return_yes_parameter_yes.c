#include<stdio.h>

int take_radius()
{
    int r;
    printf("Please enter the radius of a circle: ");
    scanf("%d",&r);
    return r;
}

float calculate_area(int radius)
{
    float ans = 3.14159*radius*radius;
    return ans;
}

int main()
{
    int r;
    r = take_radius();

    float area = calculate_area(r);

    printf("Area of the circle is %f\n",area);

    return 0;
}

