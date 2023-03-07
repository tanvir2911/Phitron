#include <bits/stdc++.h>

// getting wrong answer and output limit for this code for int type
// Accepted for long long type
//https://vjudge.net/contest/535482#status/tanvir2911/A/0/

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin>>n;

    for(;;)
    {
        if(n<1)
            break;
        cout<<n<<" ";
        if(n==1)
            break;
        else if(n%2==0)
        {
            n/=2;
            continue;
        }
        else
        {
            n=n*3+1;
            continue;
        }
    }

    return 0;
}
