#include <bits/stdc++.h>

//Accepted

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n,ans=0;
    cin>>n;

    vector<long long int>a;
    vector<long long int>b;
    a.resize(n);
    b.resize(n+1);

    for(long long int i=1; i<a.size(); i++)
    {
        cin>>a[i];
        b[a[i]]=-1;
    }

    for(long long int i=1; i<b.size(); i++)
    {
        if(b[i]!=-1)
            ans=i;
    }

    cout<<ans;

    return 0;
}
