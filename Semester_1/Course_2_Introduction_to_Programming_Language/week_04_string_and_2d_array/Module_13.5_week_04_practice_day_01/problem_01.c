#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000],new[1000];

    fgets(s,sizeof(s),stdin);

    int l=strlen(s)-1;

    for(int i=0;i<l;i++)
    {
        int count=0;
        for(int j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
    }

    printf("%d",l);

    return 0;
}
