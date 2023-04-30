#include <bits/stdc++.h>

using namespace std;

class Student{
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

public:
    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

    void setInformation(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
};

int main()
{
    Student s;
    s.setInformation("Tanvir",5,20);

    s.print_information();

    return 0;
}
