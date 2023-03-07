#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin>>s;

    s.erase(s.begin());

    s.erase(s.begin()+s.size()-1);  //same as s.pop_back();

    s.pop_back();

    cout<<s<<endl;

    return 0;
}

