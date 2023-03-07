#include <bits/stdc++.h>

using namespace std;

int x=5,y,z;

int func(int a, int b)
{
    return a+b;
}

namespace Info{
    int x=10;
    int y=5;

    int func(int a, int b)
    {
        return a*b;
    }
}

//using namespace Info;

//namespace std{
//    //declater cout
//    //cout
//}

int main()
{
//    std::cout<<Info::x<<"\n";
//    cout<<x<<"\n";
    int a=4;
    int b=5;

//    int x = func(a,b);
    int x = Info::func(a,b);
    cout<<x<<"\n";

    return 0;
}
