#include <bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";

    }
};

class Rectangle{
public:
    int width, height;

    Student s; // //multi-level class-object

    //area
    int calculate_area()
    {
        return height*width;
    }

    //perimeter
    int calculate_perimeter()
    {
        return 2*(height+width);
    }
};

int main()
{
    Student s;
    s.name = "Md. Mozammel Hossain";
    s.std_id = 26566;
    s.age=24;
    s.fathers_name = "Md. Tafazzal Hossain";
    s.mothers_name = "Ferdoushi Begum";

    Student s2;
    s2.name = "Mahdia Alam Rafia";
    s2.std_id = 011;
    s2.age=21;
    s2.fathers_name = "Md. Farooque Alam";
    s2.mothers_name = "Rowshan Ara Begum";

//    cout<<s.name<<"\n"<<s.mothers_name;

    s.print_information();
    s2.print_information();


    Rectangle r1,r2;
    r1.height = 4;
    r1.width = 8;

    cout<<r1.calculate_area()<<"\n";
    cout<<r1.calculate_perimeter()<<"\n";

    r2.height = 3;
    r2.width = 9;

    cout<<r2.calculate_area()<<"\n";
    cout<<r2.calculate_perimeter()<<"\n";

    //multi-level class-object
    r1.s.name = "Tanvir";

    r1.s.print_information();


    return 0;
}
