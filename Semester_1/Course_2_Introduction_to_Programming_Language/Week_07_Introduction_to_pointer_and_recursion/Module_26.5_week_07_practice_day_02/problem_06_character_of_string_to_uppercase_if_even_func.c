#include<stdio.h>

int is_even(char x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}

void to_uppercase_whether_digit_is_even(char s[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(is_even(s[i]))
            s[i]-=32;
    }
}

int main()
{
    char s[100];
    scanf("%s",&s);

    to_uppercase_whether_digit_is_even(s);

    printf("%s\n",s);

    return 0;
}
