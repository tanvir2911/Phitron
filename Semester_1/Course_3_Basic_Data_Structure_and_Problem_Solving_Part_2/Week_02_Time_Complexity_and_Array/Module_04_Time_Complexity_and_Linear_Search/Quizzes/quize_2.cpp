#include<bits/stdc++.h>
using namespace std;
/*
What will be the time complexity of the above program ?
time complexity = O(n)
memory complexity = O(n)
*/
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
        cin >> v[i];
    int ans = 1;
    for (int i = 0;i < n;i++)
        ans *= v[i];

    cout << ans << '\n';
    return 0;
}
