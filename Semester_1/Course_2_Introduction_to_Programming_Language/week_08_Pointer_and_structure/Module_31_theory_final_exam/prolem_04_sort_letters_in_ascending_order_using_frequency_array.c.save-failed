#include<stdio.h>

int frequency_array[27];

void frequency_array_modifier(char s[])
{
    for(int i=0;i<27;i++)
        frequency_array[i]=0;

    for(int i=0;s[i]!='\0';i++)
    {
        frequency_array[s[i]-97]++;
    }
}

void sort_letters(char s[])
{
    int j=0;
    for(int i=0;i<27;i++)
    {
        if(frequency_array[i]!=0)
        {
            for(int count=0;count<frequency_array[i];count++)
            {
                s[j]=i+97;
                j++;
            }
        }
    }
}

int main()
{
    char s[100];
    scanf("%s",s);

    frequency_array_modifier(s);

    sort_letters(s);

    printf("%s\n",s);

    return 0;
}
