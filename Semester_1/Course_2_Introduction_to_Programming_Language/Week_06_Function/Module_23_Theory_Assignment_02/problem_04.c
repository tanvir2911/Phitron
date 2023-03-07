#include<stdio.h>

int main()
{
    int n,k,kth_number,counter=1;
    scanf("%d %d",&n,&k);

    for(int i=2; i<=n; i+=2)
    {
        if(counter==k)
            kth_number=i;
        counter++;

        printf("%d ",i);
        if(i%2==0)
        {
            if(i==n || i==(n-1))
                i=-1;
        }
    }
    printf("\n");

    printf("The %dth element in this sequence is %d.\n",k,kth_number);

    return 0;
}
