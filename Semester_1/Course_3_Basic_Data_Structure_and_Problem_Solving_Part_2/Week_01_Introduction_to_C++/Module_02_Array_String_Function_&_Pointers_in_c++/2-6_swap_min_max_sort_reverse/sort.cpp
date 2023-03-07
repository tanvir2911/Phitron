#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a = {3,2,1,5,4};
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    sort(a.begin(), a.end());

    cout<<"After sorting\n";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

