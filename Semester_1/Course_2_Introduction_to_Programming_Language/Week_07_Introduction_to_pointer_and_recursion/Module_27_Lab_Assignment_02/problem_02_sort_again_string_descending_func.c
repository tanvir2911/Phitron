#include<stdio.h>

void swap(char* x, char* y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void sort_descending(char s[])
{
    for(int i=0; s[i]!='\0'; i++)
    {
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]<s[i])
                swap(&s[j],&s[i]);
        }
    }
}

int main()
{
    char s[100];
    scanf("%s",&s);

    sort_descending(s);

    printf("%s\n",s);

    return 0;
}
