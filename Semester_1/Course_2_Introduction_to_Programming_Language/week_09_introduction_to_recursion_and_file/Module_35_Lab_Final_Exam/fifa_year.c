#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int x;
    scanf("%d",&x);

    if((x%400==0 ) || (x%100!=0 && x%4==0))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

