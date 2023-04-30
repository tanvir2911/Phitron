#include <bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;

    void print_info()
    {
        cout<<name<<"\n";
    }
};

class Rectangle{
public:
    int width, height;
    Student s;
};

int main()
{
    Rectangle r1;
    r1.s.name = "Tanvir";

    r1.s.print_info();

    return 0;
}
