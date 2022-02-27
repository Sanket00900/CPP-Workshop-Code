#include <iostream>
using namespace std;
int main()
{
    string a = "Hello";
    string *ptr;

    ptr = &a;

    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << a << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}