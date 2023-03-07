#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        printf("%d",i);
    printf("\n");
    for(int i=2;i<=n-1;i++)
    {
        printf("%d",i);
        for(int j=0;j<n-2;j++)
            printf(" ");
        printf("%d\n",n);
    }
    for(int i=1;i<=n;i++)
        printf("%d",n);


    return 0;
}
