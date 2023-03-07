#include<stdio.h>
int main()
{
    char name[]= "Mozammel Tanvir";

    name[6]='A';
    name[15]='.';
    name[16]='\0';
    printf("My name is %s\n",name);


    return 0;
}
