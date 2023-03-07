#include<stdio.h>
#include<math.h>

int power_of_two_check(int x)
{
    if(x/2==1 && x%2==0)
        return 1;
    else if(x%2!=0)
        return 0;
    power_of_two_check(x/2);
}

int whether_power_of_two(char s[])
{
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
        sum+=(s[i]-96);
    }
    printf("%d\n",sum);

    if(sum == 1)
        return 0;

    int x = power_of_two_check(sum);
    return x;

}

int main()
{
    char s[100];
    scanf("%s",&s);
    printf("%s\n",s);
    int pow_of_two = whether_power_of_two(s);
    if(pow_of_two == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
