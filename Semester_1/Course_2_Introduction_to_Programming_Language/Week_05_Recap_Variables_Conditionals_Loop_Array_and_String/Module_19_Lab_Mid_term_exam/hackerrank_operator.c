#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[20];
    fgets(s,sizeof(s),stdin);

    int string_length = strlen(s)-1;
    int sum=0,a,b;

    scanf("%d%d",&a,&b);

    for(int i=0;i<string_length;i++)
    {
        if(s[i]=='+')
            sum+=(a+b);
        else
            sum+=(a*b);
    }

    printf("%d\n",sum);

    return 0;
}
