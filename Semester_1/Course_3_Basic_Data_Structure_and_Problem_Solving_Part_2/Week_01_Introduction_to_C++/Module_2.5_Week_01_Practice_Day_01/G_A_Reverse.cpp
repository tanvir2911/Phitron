#include <bits/stdc++.h>

//Accepted

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int a,b;
    string s;
    cin>>a>>b;
    cin>>s;

    reverse(s.begin()+a-1, s.begin()+b);

    cout<<s;

    return 0;
}
