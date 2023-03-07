#include <bits/stdc++.h>

using namespace std;

void Swap(int &x, int &y)
{
    int temp = y;
    y=x;
    x=temp;
}

int main()
{
    int a,b;
    cin>>a>>b;

    Swap(a,b);

    cout<<a<<" "<<b<<endl;

    return 0;
}
