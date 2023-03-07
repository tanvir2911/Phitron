#include <bits/stdc++.h>

//Accepted

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    int string_size = s.size();

    vector<int>rep;

    for(int i=0;i<s.size();i++)
    {
        int sum=1;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                sum++;
                s.erase(s.begin()+j);
                j--;
            }
        }
        rep.push_back(sum);

    }

    int n = 1;
    for(int i=1;i<=string_size;i++)
    {
        n*=i;
    }

    int r=1;
    for(int i=0;i<rep.size();i++)
    {
        for(int j=1;j<=rep[i];j++)
        {
            r*=j;
        }
    }

    int permutation_answer = n/r;

    cout<<permutation_answer;

    return 0;
}
