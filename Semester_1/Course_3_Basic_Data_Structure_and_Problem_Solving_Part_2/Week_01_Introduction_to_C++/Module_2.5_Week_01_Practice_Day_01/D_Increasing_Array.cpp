#include <bits/stdc++.h>

// Accepted

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;

    vector<long long int>a;
    a.resize(n);

    for(long long int i=0;i<a.size();i++)
        cin>>a[i];

    long long int moves=0;
    for(long long int i=1;i<a.size();i++)
    {
        if(a[i]<a[i-1])
        {
            moves+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }

    cout<<moves;

    return 0;
}
