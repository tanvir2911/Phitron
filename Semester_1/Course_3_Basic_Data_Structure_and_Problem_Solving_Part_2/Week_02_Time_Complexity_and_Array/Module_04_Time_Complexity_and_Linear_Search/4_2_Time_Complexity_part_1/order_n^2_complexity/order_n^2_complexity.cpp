#include <bits/stdc++.h>

using namespace std;

//1000 O(1000 + 1000000)
/*
Time Complexity = O(n + n^2) = O(n^2)
Memory Complexity = O(1 +  n + 1) = O(n)
*/

int main()
{
    int n;
    cin>>n;   // memory O(1)
    vector<int>a(n);  // memory O(n)
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // i=0 --> n
    // i=1 --> n
    // i=2 --> n
    // i=n-1 --> n
    // n * n = n^2
    for(int i=0;i<n;i++)
    {
        string ans = "NO\n"; // memory O(1)
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            else
            {
                if(a[i]==a[j])
                {
                    ans = "YES\n";
                    break;
                }
            }
        }
        cout<<"i = "<<i<<" "<<ans;
    }

    return 0;
}

/*
user will give n number of inputs, I need to go
to every index and find out if that number occurs
in other indexes or not.
n numbers
4
2 4 6 2

i=0; yes
i=1; no
i=2; no
i=3; yes


*/
