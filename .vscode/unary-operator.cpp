#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 10;
    b = 20;

    cout << "Increment Operator";
    cout << "\nPre-increment : " << ++a;
    cout << "\nPost-increment : " << a++;

    cout << "\nDecrement Operator";
    cout << "\nPre-decrement : " << --b;
    cout << "\nPost-decrement : " << b--;
}