#include<stdio.h>

int is_char_present(char x, char y[]);

int main()
{
    char s[100];
    scanf("%s",&s);

    if(is_char_present('1',s) && is_char_present('9',s) && is_char_present('7',s))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

int is_char_present(char x, char y[])
{
    for(int i=0;y[i]!='\0';i++)
    {
        if(y[i]==x)
            return 1;
    }
    return 0;
}
