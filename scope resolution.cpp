#include <iostream>
using namespace std;

namespace First
{
    int x = 10;
}

namespace Second
{
    int x = 20;
}

class Demo
{
public:
    int x;

    Demo()
    {
        x = 30;
    }

    void display();
};

void Demo::display()
{
    cout << "Class x = " << x << endl;
}

int main()
{
    cout << "First namespace x = " << First::x << endl;
    cout << "Second namespace x = " << Second::x << endl;

    Demo d;
    d.display();

    return 0;
}
