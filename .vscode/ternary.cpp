#include <iostream>
using namespace std;

int main()
{
    int num1 = 20, num2 = 40, min;
    min = (num1 < num2) ? num1 : num2;
    cout << "Minimum among the two is : " << min;
}