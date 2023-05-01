#include <bits/stdc++.h>

using namespace std;
/*
time complexity = O(n)
memory complexity = O(n)
*/

int main()
{
    int n,sum=0;
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    cout<<sum<<"\n";

    return 0;
}
