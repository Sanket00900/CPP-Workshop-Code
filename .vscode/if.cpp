#include <iostream>
using namespace std;

int main()
{
    int salary = 10000;
    int workhrs = 5;

    if (workhrs >= 10)
    {
        salary = salary + 3000;
        cout << salary;
    }

    cout << salary;
}