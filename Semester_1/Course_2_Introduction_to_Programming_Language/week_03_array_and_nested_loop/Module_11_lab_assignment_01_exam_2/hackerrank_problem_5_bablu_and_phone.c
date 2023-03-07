#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,ara[105],i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
        scanf("%d%%",&ara[i]);

    for(i=0;i<t;i++)
    {
        int charge=ara[i],time=0,diff=0;
        if(charge==100)
            printf("%d minutes\n",time);
        else
        {
            while(charge<100)
            {
                if(charge<60)
                {
                    diff=60-charge;
                    charge+=diff;
                    time+=diff;
                }
                else if(charge<80 && charge>=60)
                {
                    diff=80-charge;
                    charge+=diff;
                    time+=diff*2;
                }
                else if(charge<100 && charge>=80)
                {
                    diff=100-charge;
                    charge+=diff;
                    time+=diff*3;
                }
            }
            printf("%d minutes\n",time);
        }
    }



    return 0;
}
