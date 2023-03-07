#include <bits/stdc++.h>

// Time limit exceeded;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;

    vector<long long int>a;
    a.resize(n);


    for(long long int i=0;i<n;i++)
        cin>>a[i];

    for(long long int i=0;i<a.size();i++)
    {
        for(long long int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                a.erase(a.begin()+j);
                j--;
            }
        }
    }

    cout<<a.size();

    return 0;
}
