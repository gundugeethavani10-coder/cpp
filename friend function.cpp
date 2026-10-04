#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    Number()
    {
        n = 10;
    }

    friend void display(Number obj);
};

void display(Number obj)
{
    cout << "Value of n = " << obj.n << endl;
}

int main()
{
    Number obj;
    display(obj);

    return 0;
}
