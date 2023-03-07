#include<stdio.h>

int main()
{
    int n,spaces,signs=1;
    scanf("%d",&n);
    spaces = n-1;

    for(int i=1; i<=n; i++)
    {
        for(int j=spaces; j>=1; j--)
        {
            printf(" ");
        }
        for(int j=1; j<=signs; j++)
        {
            if(i%2!=0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        signs+=2;
        spaces--;
        printf("\n");
    }

    return 0;
}
