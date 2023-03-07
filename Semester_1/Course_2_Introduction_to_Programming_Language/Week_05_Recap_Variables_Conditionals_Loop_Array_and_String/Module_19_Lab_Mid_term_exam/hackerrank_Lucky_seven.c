#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// alternative way and easiest way

int main() {

    int t,palindrome=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        char s[22];
        scanf("%s",s);



        if(strlen(s)==1)
        {
            palindrome=1;
        }
        else
        {
            int odd_even_length;

        if(strlen(s)%2==0)
        {
            odd_even_length=strlen(s)/2;
        }
        else
        {
            odd_even_length=strlen(s)/2;
        }


        for(int j=0;j<odd_even_length;j++)
        {
            if(s[j]==s[strlen(s)-1-j])
            {
                palindrome=1;
            }
            else
            {
                palindrome=0;
                break;
            }

        }
        }

        if(palindrome==0)
            printf("Case #1: Not Palindrome\n");
        else
        {
            if((strlen(s)-1)>7)
                printf("Case #2: %c%lu%c\n",s[0],(strlen(s)-2),(s[strlen(s)-1]));
            else
                printf("Case #3: %s\n",s);
        }
    }

    return 0;
}
