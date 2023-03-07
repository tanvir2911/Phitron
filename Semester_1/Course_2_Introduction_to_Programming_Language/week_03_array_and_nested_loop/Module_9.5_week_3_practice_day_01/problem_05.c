#include<stdio.h>
int main()
{
    int n,ara[100],target,i,j,y_n=0,sum;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the numbers of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    printf("Enter the target number if it is achievable: ");
    scanf("%d",&target);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=ara[i]+ara[j];
            if(sum==target)
            {
                y_n=1;
                break;
            }
            else
            {
                y_n=0;
            }

        }
        if(y_n==1)
            break;
    }

    if(y_n==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
