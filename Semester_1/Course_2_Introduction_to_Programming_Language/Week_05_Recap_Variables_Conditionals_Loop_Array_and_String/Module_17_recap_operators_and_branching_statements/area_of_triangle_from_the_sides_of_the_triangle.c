#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of a triangle: \n");
    scanf("%d %d %d",&a,&b,&c);

    float s;

    s=(a+b+c)/2.0;

    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is = %f\n",area);

    return 0;
}
