#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;

    for(int i=0;i<10;i++)
    {
        cout<<"Before push"<<a.size()<<"\n";
        a.push_back(i);
        cout<<"After push"<<a.size()<<"\n";
    }

    a.insert(a.begin() + 1, 100);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"\n";
    }

    a.erase(a.begin()+1);
    a.pop_back();

    cout<<"After delete\n";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"\n";
    }

    return 0;
}
