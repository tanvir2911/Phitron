#include<stdio.h>

int main()
{
    float x,y;
    float *p,*q;
    p = &x;
    q = &y;
    scanf("%f %f",p,q);

    float average = (*p + *q)/2;

    printf("%0.3f\n",average);

    return 0;
}
