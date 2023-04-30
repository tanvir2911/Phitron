#include <bits/stdc++.h>

using namespace std;

class Person{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout<<"Name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";
    }
};

int main()
{
    Person p;

    p.father = new Person;
    p.mother = new Person;

    p.name = "Tayef";
    p.father->name = "Tafazzal";
    p.mother->name = "Munni";

    p.print_info();

    return 0;
}
