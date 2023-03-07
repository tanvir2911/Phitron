#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "I am eating rice.";

    for(int i=0;i<s1.size();i++)
    {
        s1[i]+=1;
    }

    cout<<s1<<endl;

    return 0;
}

