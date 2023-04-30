#include <bits/stdc++.h>


// destructor is useless here.. though understand the order here..

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student()
    {
        // empty constructor
    }

    Student(string name, int std_id, int age, string f_name, string m_name)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";

    }

    // destructor is useless here, as there is nothing declared using 'new'
    ~Student()
    {
        cout<<"Called ";
        print_information();
    }
};


int main()
{
    Student s("Tanvir", 20, 28, "Tafazzal", "Ferdoushi");
    s.print_information();

    Student s2("Tonmoy", 11, 22);
    s2.print_information();

    Student s3;

    return 0;
}

