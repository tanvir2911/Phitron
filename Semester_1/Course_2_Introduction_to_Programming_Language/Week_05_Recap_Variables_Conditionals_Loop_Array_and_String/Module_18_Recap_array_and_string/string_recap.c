#include<stdio.h>
#include<string.h>
int main()
{
    char name1[] = {'T','a','n','v','i','r'};
    char name[] = {'T','a','n','v','i','r','\0'};
    char name2[] = "Mozammel Tanvir";
    char name3[] = "Mozammel Tanvir";
    char name4[] = "MozammelTanvir";

    char name5[] = "MozammelTanvir";
    char name6[] = "mozaMmelTAnvir";

    char name7[] = "Mozammel";
    char name8[] = " Tanvir";


    puts(name);
    puts(name1);
    puts(name2);
    printf("%d\n",strlen(name2));
    printf("%d\n",strnlen(name,3));

    printf("%d\n",strcmp(name2,name1));
    printf("%d\n",strcmp(name1,name2));
    printf("%d\n",strcmp(name3,name2));

    printf("%d\n",strncmp(name3,name4,9));
    printf("%d\n",strncmp(name3,name4,8));


    printf("%d\n",strcasecmp(name5,name6));

    printf("%d\n",strlen(name7));
    strcat(name7,name8);
    puts(name7);
    printf("%d\n",strlen(name7));

    strncat(name7,name8,5);
    puts(name7);

    char name9[] = "Mozammel Hossain";
    char name10[] = "Mehedi Hasan";

    //strcpy(name9,name10);
    puts(name9);

    strncpy(name9,name10,3);
    name9[3]='\0';
    puts(name9);


    char name11[] = "Mozammel Tanvir";
    printf("%s\n",strchr(name11,'z'));
    printf("%s\n",strrchr(name11,'l'));


    printf("%s\n",strstr(name11,"an"));

    return 0;
}
