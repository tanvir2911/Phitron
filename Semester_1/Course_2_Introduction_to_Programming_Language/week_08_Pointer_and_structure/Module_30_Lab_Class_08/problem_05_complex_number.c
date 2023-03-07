#include<stdio.h>

struct Comp{
    double real;
    double imaginary;
};

struct Comp add_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real + b.real;
    ans.imaginary = a.imaginary + b.imaginary;

    return ans;
};

void print_comp(struct Comp c)
{
    printf("%0.1llf + %0.1llfi\n",c.real,c.imaginary);
}

struct Comp multiply_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real*b.real - a.imaginary*b.imaginary;
    ans.imaginary = a.real*b.imaginary + b.real*a.imaginary;
    return ans;
};

int main()
{
    struct Comp c1 = {5.9, 3.1};
    struct Comp c2 = {-2.5, 3.7};

    print_comp(add_comp(c1,c2));
    print_comp(multiply_comp(c1,c2));

    return 0;
}
