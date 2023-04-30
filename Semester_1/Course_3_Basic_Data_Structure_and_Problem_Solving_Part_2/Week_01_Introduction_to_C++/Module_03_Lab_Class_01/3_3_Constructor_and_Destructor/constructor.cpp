#include <bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student(string s, int id, int ag, string f_name, string m_name)
    {
        name = s;
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";

    }
};


int main()
{
    Student s("Tanvir", 20, 28, "Tafazzal", "Ferdoushi");

    s.print_information();

    return 0;
}

