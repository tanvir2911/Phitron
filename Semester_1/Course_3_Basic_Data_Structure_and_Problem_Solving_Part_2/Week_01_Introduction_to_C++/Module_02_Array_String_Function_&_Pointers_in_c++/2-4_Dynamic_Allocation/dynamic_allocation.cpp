#include <bits/stdc++.h>

using namespace std;

int main()
{
    int * x = new int;
    *x = 10;

    cout<<x<<"\n";
    cout<<*x<<"\n";

    delete x;

    return 0;
}
