#include<stdio.h>

float circle_area(float r)
{
    return 3.14159*r*r;
}

int main()
{
    float r;
    scanf("%f",&r);

    float area = circle_area(r);
    printf("%f",area);

    return 0;
}
