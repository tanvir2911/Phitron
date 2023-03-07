#include<stdio.h>

int main()
{
    int a=7;
    double b;
    char c = 'a';

    b=a;
    a=c;
    c=105;
    //b = 25/4.0;
    //b = 25/4;
    b = (double)25/4; //explicit type casting.

    printf("%d %lf %c",a,b,c);

    return 0;
}
