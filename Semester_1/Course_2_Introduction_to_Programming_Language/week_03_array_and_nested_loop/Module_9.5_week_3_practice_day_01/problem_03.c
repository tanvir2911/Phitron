#include<stdio.h>
int main()
{
    int n,ara[100],i,j,uniq;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i]!=ara[j])
            {
                uniq=0;
                break;
            }
            else
                uniq=1;
        }
    }

    if(uniq==0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
