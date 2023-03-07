#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];

    cout<<sum<<"\n";

    int multiple = 1;
    for(int i=0;i<n;i++)
        multiple*=a[i];

    cout<<multiple<<"\n";

    return 0;
}
