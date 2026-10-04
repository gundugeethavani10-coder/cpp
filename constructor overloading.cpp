#include <iostream>
using namespace std;

class Student
{
    int age;
    string name;

public:
    // Default constructor
    Student()
    {
        age = 18;
        name = "Geetha";
    }

    // Parameterized constructor
    Student(int a, string n)
    {
        age = a;
        name = n;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2(20, "Ravi");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}
