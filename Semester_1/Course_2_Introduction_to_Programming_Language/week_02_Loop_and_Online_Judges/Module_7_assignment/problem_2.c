#include <stdio.h>
int main()
{
    int a,b,c,d,largest,smallest;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        largest=a;
    }
    else if(b>a && b>c && b>d)
    {
        largest=b;
    }
    else if(c>a && c>b && c>d)
    {
        largest=c;
    }
    else
    {
        largest=d;
    }

    if(a<b && a<c && a<d)
    {
        smallest=a;
    }
    else if(b<a && b<c && b<d)
    {
        smallest=b;
    }
    else if(c<a && c<b && c<d)
    {
        smallest=c;
    }
    else
    {
        smallest=d;
    }

    printf("Largest = %d\n",largest);
    printf("Smallest = %d\n",smallest);

    return 0;
}
