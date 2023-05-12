#include <bits/stdc++.h>

using namespace std;

// Time complexity= O((n+q)logn)

int main()
{
    int n,q,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    sort(a.begin(),a.end());
    for(int i=0;i<q;i++)
    {
        cin>>k;
        int low=0,high=n-1;
        bool flag=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==k)
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
            if(k<a[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(flag==0)
            cout<<"NO\n";
    }

    return 0;
}
