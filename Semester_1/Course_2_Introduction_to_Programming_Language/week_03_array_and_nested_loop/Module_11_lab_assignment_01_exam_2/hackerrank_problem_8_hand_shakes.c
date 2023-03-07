#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,hand_shakes;
    scanf("%lld",&n);

    hand_shakes=(n*(n-1))/2;

    printf("%lld",hand_shakes);

    return 0;
}

