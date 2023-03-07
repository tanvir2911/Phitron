#include <stdio.h>
int main()
{
    int i,lines,number_of_gaps,number_of_stars;
    printf("How many lines you wanna see? ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        for(number_of_gaps=lines-i;number_of_gaps>0;number_of_gaps--)
        {
            printf(" ");
        }

        printf("*");

        if(i!=1)
        {
            for(number_of_stars=1;number_of_stars<i;number_of_stars++)
            {
                printf("**");
            }
        }

        for(number_of_gaps=lines-i;number_of_gaps>0;number_of_gaps--)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
