#include <bits/stdc++.h>

//Accepted

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    int product = (s[0]-'0') * (s[2]-'0');

    cout<<product;

    return 0;
}
