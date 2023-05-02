#include <bits/stdc++.h>

using namespace std;
/*
time complexity = O(nlogn + q.logn) = O(logn.(n+q))

here, time complexity for the sort function is nlogn, and
time complexity for binary search is logn.
and binary search is happening for q times so it'll be q times logn
or qlogn.
*/

int main()
{
    int n,q,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>k;
        int low=0, high=n-1;
        bool flag=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==k)
            {
                cout<<"Yes "<<mid<<"\n";
                flag=1;
                break;
            }
            if(a[mid]<k)
                low=mid+1;
            else
                high=mid-1;
        }

        if(flag==0)
            cout<<"No\n";
    }

    return 0;
}
/*
n - length array

q - query
k - Yes/No and index
*/
