#include <stdio.h>
int main()
{
    int x,i=0;
    scanf("%d",&x);

    if(x>5 && x%5!=0)
    {
        i=x/5 + 1;
    }
    else if(x>5 && x%5==0)
    {
        i=x/5;
    }
    else
    {
        i=1;
    }

    printf("%d",i);


    return 0;
}
