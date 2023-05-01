#include <bits/stdc++.h>

using namespace std;

/*
Time Complexity: O(n)
Memory Complexity: O(n)
*/

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Printing YES for the first index\n";
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"YES\n";
            break;
        }
    }

    cout<<"Printing only the first index\n";
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<i<<"\n";
            break;
        }
    }

    cout<<"Printing all possible indexes\n";
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<i<<" ";
        }
    }

    cout<<"\n";

    return 0;
}

/*
7 5
2 4 5 7 5 3 2
*/
