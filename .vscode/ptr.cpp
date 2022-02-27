#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a; // * -> dereferncing operator

    cout << "The Address of a is " << &a << endl;
    cout << "The Address of a is " << b << endl;

    cout << "Value at adrress b is " << *b << endl;
    cout << "Value at adrress b is " << *&a << endl;
}