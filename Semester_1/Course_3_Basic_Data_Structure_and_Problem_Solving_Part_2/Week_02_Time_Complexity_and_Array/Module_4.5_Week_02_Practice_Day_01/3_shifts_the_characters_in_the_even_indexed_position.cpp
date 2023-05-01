#include<bits/stdc++.h>
using namespace std;
/*
time complexity = O(n)
memory complexity = O(n)
*/
int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            if(s[i]=='z')
            {
                s[i]='a';
                continue;
            }
            if(s[i]=='Z')
            {
                s[i]='A';
                continue;
            }
            s[i]++;
        }
    }

    cout<<s<<"\n";

    return 0;
}
