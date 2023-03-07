#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool x = true;
    bool y = false;

    if(x || y)
    {
        cout<<"True\n";
        if(x)
        {
            cout<<"I am nested if\n";
        }
        else
        {
            cout<<"I am nested else\n:";
        }
    }
    else
    {
        cout<<"False\n";
    }

    return 0;
}
