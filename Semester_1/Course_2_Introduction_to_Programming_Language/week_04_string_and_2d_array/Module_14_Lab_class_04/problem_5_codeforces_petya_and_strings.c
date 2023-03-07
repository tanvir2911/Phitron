#include<stdio.h>
#include<string.h>

int main()
{
    char s[102],t[102],flag=0;;

    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);

    for(int i=0; i<strlen(s)-1; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        if(t[i]>='A' && t[i]<='Z')
            t[i]+=32;

        if(s[i]<t[i])
        {
            flag=-1;
            break;
        }
        else
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("%d",flag);
    else if(flag==1)
        printf("%d",flag);
    else if(flag==-1)
        printf("%d",flag);

    return 0;
}

