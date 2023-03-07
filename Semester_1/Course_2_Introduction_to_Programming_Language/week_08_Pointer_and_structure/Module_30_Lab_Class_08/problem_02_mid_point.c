#include<stdio.h>

struct Point {
    float x;
    float y;
};

struct Point mid_point(struct Point p, struct Point q)
{
    struct Point mid;
    mid.x = (p.x + q.x)/2;
    mid.y = (p.y + q.y)/2;

    return mid;
};

int main()
{
    struct Point p1 = {1,1};
    struct Point p2 = {4,5};
    struct Point p3;

    p3 = mid_point(p1,p2);

    printf("Mid Point is %0.2f, %0.2f\n", p3.x, p3.y);

    return 0;
}
