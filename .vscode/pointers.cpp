#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << a << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}