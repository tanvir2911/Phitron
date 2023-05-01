#include<bits/stdc++.h>

using namespace std;
/*
time complexity = O(n)
memory complexity = O(n)
*/
int main()
{
    int n, mul=1;
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2!=0)
        {
            mul*=a[i];
        }
    }

    cout<<mul<<"\n";

    return 0;
}
