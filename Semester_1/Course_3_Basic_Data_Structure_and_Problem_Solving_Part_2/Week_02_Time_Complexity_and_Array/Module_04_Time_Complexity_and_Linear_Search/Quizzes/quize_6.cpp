#include<bits/stdc++.h>
using namespace std;
/*
What will be the memory complexity of the above program ?
time complexity = O(1)
memory complexity = O(1)

*/
int main()
{
    int a, b, c, d, e, maxi;
    cin >> a >> b >> c >> d >> e;
    maxi = max({ a,b,c,d,e });
    cout << maxi << '\n';
    return 0;
}
