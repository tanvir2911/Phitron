#include <bits/stdc++.h>

// Time limit exceeded;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n,ans=0;
    cin>>n;

    vector<long long int>a;
    a.resize(n);


    for(long long int i=0;i<n;i++)
        cin>>a[i];

    for(long long int i=0;i<a.size();i++)
    {
        if(i==0)
        {
            ans++;
            continue;
        }
        int flag=0;
        for(long long int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=0;
                break;
            }
            flag=1;
        }
        if(flag==1)
        {
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
