#include <iostream>
using namespace std;

int main()
{
    const int a = 10;
    int b = 20;
    a = 20;
    int c = a + b;
    cout << c;
    return 0;
}