#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

protected:
    int age;

public:
    Student()
    {
        marks = 90;
        age = 20;
    }

    void display(int bonus = 5)
    {
        cout << "Marks = " << marks << endl;
        cout << "Age = " << age << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Total Marks = " << marks + bonus << endl;
    }
};

int main()
{
    Student s;

    // Default argument is used
    s.display();

    // User can also give a value
    cout << "\nWith given bonus:\n";
    s.display(10);

    return 0;
}
