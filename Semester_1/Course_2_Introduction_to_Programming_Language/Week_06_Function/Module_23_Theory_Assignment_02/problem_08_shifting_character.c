#include<stdio.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    int n;
    scanf("%d",&n);

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='v')
        {
            int temp = 'z' - s[i];
            s[i] = 'a' + (4-temp);
        }
        else
            s[i]+=n;
    }

    printf("%s",s);

    return 0;
}

