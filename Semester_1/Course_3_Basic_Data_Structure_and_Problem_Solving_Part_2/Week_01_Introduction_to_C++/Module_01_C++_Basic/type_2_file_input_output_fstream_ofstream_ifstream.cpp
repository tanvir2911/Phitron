#include <bits/stdc++.h>
//#include <iostream>
//#include <fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    ifstream ifs;
    ifs.open("0.txt");

    int x;
    double y,z;
    string s;
    getline(ifs,s);
    ifs >>x>>y>>z;

    of<<"Hello world. "<<s<<"\n";
    of2<<"Hello of2\n"<<x<<" "<<y<<" "<<z<<"\n";

    of.close();
    of2.close();
    ifs.close();

    return 0;
}
