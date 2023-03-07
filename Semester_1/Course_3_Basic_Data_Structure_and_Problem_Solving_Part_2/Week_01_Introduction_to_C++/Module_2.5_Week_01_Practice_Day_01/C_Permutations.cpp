#include <bits/stdc++.h>

// wrong answer

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;

    if(n<5)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for(long long int i=1; i<=n; i+=2)
        {
            cout<<i<<" ";
        }
        for(long long int i=2; i<=n; i+=2)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
