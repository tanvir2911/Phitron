#include <stdio.h>
int main()
{
    int w;
    printf("Please enter the weight of the melon: ");
    scanf("%d", &w);
    if(w%2==0 && w!=2)
    {
        printf("Possible!");
    }
    else
    {
        printf("Impossible!");
    }
}
