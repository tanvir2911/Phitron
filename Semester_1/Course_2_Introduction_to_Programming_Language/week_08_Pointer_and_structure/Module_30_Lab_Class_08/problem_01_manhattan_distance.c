#include<stdio.h>
#include<math.h>

struct Point{
    int x;
    int y;
};

int manhattan_distance(struct Point p, struct Point q)
{
    return abs(p.x-q.x) + abs(p.y-q.y);
}

int main()
{
    struct Point p1 = {1,1};
    struct Point p2;

    scanf("%d %d",&p2.x,&p2.y);

    int res = manhattan_distance(p1,p2);
    printf("Manhattan difference is %d\n",res);

    return 0;
}
