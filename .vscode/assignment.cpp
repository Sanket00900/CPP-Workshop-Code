#include <iostream>
using namespace std;

int main()
{
    int number = 20;

    cout << "num assigned (=) : " << number;
    cout << "\n(+=) : " << (number += 5);
    cout << "\n(-=) : " << (number -= 5);
    cout << "\n(*=) : " << (number *= 5);
    cout << "\n(/=) : " << (number /= 5);
    cout << "\n(%=) : " << (number %= 5);
}