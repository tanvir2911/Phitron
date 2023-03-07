#include <stdio.h>
int main()
{
    int array[] = {12, 2, 19, 24, 3, 2, 9, 6},i,n=8,even=0,odd=0;

    for(i=0;i<n;i++)
    {
        if(array[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("The number of odd numbers is %d\n",odd);
    printf("The number of even numbers is %d\n",even);

    return 0;
}
