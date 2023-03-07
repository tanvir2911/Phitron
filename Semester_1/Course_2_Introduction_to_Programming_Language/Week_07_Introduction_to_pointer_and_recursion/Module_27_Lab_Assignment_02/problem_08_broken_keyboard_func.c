#include<stdio.h>

void broken_keyboard(char s[],char s1[])
{
    int j=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        {
            s1[j]=s[i];
            j++;
        }
        if(i%2!=0)
        {
            s1[j]=s[i];
            s1[j+1]=s[i];
            j+=2;
        }
    }
}

int main()
{
    char s[100],s1[100];
    scanf("%s",&s);

    broken_keyboard(s,s1);

    printf("%s\n",s1);

    return 0;
}
