#include <iostream>
using namespace std;

int main()
{

    int N = 4;
    int *ptr2 = &N;

    cout << "Pointer ptr2 before Subtraction: "; // 1000
    cout << ptr2 << endl;

    // Addition of 3 to ptr2
    ptr2 = ptr2 - 2;
    cout << "Pointer ptr2 after Subtraction: "; // 992
    cout << ptr2 << endl;

    return 0;
}