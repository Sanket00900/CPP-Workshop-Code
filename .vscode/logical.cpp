#include <iostream>
using namespace std;

int main()
{
    int Num1 = 10, Num2 = 20, Num3 = 30, Num4 = 40;

    cout << "Logical AND (&&) :" << (Num1 < Num2 && Num3 < Num4);
    cout << "\nLogical OR (||) :" << (Num1 > Num2 && Num3 < Num4);
    cout << "\nLogical NOT (!) :" << (!(Num3 < Num4));
}