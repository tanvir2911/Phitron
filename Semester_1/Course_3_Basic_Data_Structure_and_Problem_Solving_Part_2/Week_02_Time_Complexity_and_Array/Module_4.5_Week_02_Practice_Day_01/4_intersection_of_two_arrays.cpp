#include <bits/stdc++.h>

using namespace std;
/*
time complexity = O(n*m) = O(n^2)
memory complexity = O(n) = O(n)
*/
int main()
{
    int n,m;
    cin>>n;
    vector<int>ara1(n);
    for(int i=0;i<n;i++)
        cin>>ara1[i];
    cin>>m;
    vector<int>ara2(m);
    for(int i=0;i<m;i++)
        cin>>ara2[i];

    vector<int>intersection;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ara1[i]==ara2[j])
            {
                intersection.push_back(ara1[i]);
                break;
            }
        }
    }

    for(int i=0;i<intersection.size();i++)
        cout<<intersection[i]<<" ";
    cout<<"\n";

    return 0;
}
