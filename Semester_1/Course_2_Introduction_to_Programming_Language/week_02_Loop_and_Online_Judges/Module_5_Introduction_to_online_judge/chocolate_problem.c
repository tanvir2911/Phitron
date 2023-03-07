#include <stdio.h>
int main()
{
    //shopkeeper will provide a chocolate on the return of every 4 empty packets.

    int chocolate, packate, sum;
    printf("Enter the number of chocolates you want to buy: ");
    scanf("%d",&chocolate);
    sum = chocolate;

    for(packate = chocolate; packate>=4;packate=chocolate+packate)
    {
        chocolate = packate / 4;
        packate = packate % 4;

        sum += chocolate;
    }

    printf("The number of chocolates you will get is %d", sum);

    return 0;
}
