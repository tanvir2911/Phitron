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

    vector<int>union_array = ara1;

    for(int i=0;i<m;i++)
    {
        string flag = "no\n";
        for(int j=0;j<union_array.size();j++)
        {
            if(ara2[i]==union_array[j])
            {
                flag = "yes\n";
                break;
            }

        }
        if(flag == "no\n")
        {
            union_array.push_back(ara2[i]);
        }
    }

    sort(union_array.begin(), union_array.end());

    for(int i=0;i<union_array.size();i++)
        cout<<union_array[i]<<" ";
    cout<<"\n";


    return 0;
}
