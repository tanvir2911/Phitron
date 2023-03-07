#include <bits/stdc++.h>

// Time limit exceeds

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    int a=0,c=0,t=0,g=0;
//
//    string s;
//    cin>>s;
//
//    for(int i=0;i<s.size();i++)
//    {
//        if(s[i]=='A')
//            a++;
//        else if(s[i]=='C')
//            c++;
//        else if(s[i]=='T')
//            t++;
//        else if(s[i]=='G')
//            g++;
//    }
//
//    int maxx = max({a,c,t,g});
//
//    cout<<maxx;


    string s;
    cin>>s;

    long long int max_rep = 0;
    for(long long int i=0;i<s.size();i++)
    {
        long long int rep = 1;
        for(long long int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                rep++;
            }
            else
            {
                break;
            }
        }

        if(rep>max_rep)
            max_rep=rep;
    }

    cout<<max_rep<<"\n";

    return 0;
}
