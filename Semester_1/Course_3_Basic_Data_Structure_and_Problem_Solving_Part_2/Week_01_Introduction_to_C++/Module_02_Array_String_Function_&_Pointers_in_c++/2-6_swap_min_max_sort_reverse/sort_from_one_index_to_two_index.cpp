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

    // sort from 1 index to 2 index.
    // a.end() is basically a.begin()+.size()

    sort(a.begin()+1, a.begin()+2+1);

    cout<<"After sorting from 1 index to 2 index\n";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

