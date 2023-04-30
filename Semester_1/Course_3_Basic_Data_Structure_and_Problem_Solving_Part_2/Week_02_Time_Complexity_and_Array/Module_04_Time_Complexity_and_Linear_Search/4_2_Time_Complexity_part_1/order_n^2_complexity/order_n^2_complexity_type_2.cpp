#include <bits/stdc++.h>

using namespace std;

/*
Time Complexity = O(n + (n^2)/2 - (n/2)) = O(n^2/2) = O(n^2)
space complexity = O(1+n+1) = O(n)
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


    // i=0 --> 1 -- n-1 -> n-1
    // i=1 --> 2 -- n-1 -> n-2
    // i=2 --> 3 -- n-1 -> n-3
    // i=n-1 --> 0 -> 0

    for(int i=0; i<n; i++)
    {
        string ans = "NO\n"; // memory O(1)
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                ans = "YES\n";
                break;
            }
        }
        cout<<"i = "<<i<<" "<<ans;
    }

    return 0;
}

/*
user will give n number of inputs,
I need to go to every index that is greater
than the current index and find out if that number
occurs in those indexes or not.
n numbers
4
2 4 6 2

i=0; i=3 yes
i=1; no
i=2; no
i=3; no

index = i, any index j, where j>i and a[i]==a[j]

(n-1) + (n-2) + (n-3)+...+ 2 + 1 + 0

--> ((n-1)*n)/2
--> (n^2 - n)/2
--> (n^2)/2 - (n/2)

*/
