#include <bits/stdc++.h>

using namespace std;

class User{
protected:
    string name;
    int age;

};

class Admin: User{
private:
    string designation;
public:
    void set_info(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print_info()
    {
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<designation<<"\n";
    }
};

int main()
{
    Admin ad;
    ad.set_info("Tanvir",28, "CEO");
    ad.print_info();

    return 0;
}
