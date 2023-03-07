#include <stdio.h>
int main()
{
    int hight,i,j;
    printf("Enter the hight of the triangle: ");
    scanf("%d",&hight);

    for(i=1;i<=hight;i++)
    {
        if(i==1 || i==2 || i==hight)
        {
            for(j=1;j<=i;j++)
            {
                printf("#");
            }
        }
        else
        {
            printf("#");
            for(j=1;j<=i-2;j++)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
