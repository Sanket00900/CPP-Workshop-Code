#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 5;
    b = 7;

    cout << "Bitwise AND : " << (a & b);
    cout << "\nBitwise OR : " << (a | b);
    cout << "\nBitwise XOR : " << (a ^ b);
    cout << "\nBitwise Complement : " << (~b);
}
