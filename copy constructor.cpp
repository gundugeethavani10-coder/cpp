#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    Student(int a)
    {
        age = a;
    }

    // Copy constructor
    Student(const Student &s)
    {
        age = s.age;
    }

    void display()
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s1(20);

    // Copying s1 into s2
    Student s2(s1);

    cout << "Original object:" << endl;
    s1.display();

    cout << "Copied object:" << endl;
    s2.display();

    return 0;
}
