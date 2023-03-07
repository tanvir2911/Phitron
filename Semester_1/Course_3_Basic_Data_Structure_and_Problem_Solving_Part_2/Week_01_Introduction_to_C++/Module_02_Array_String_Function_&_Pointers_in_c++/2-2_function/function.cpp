#include <bits/stdc++.h>

using namespace std;

string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}

int main()
{
    string s;
    cin>>s;

    string ans = erase_first_last(s);

    cout<<s<<endl;
    cout<<ans<<endl;

    return 0;
}


