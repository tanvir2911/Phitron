#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "abcdefg";

    s1.erase(s1.begin()+2);
//    s1.erase(s1.begin()+100); //unidentified behavior //program is going to crash.


    cout<<s1<<endl;

    return 0;
}

