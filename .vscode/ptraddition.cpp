#include <iostream>
using namespace std;

int main()
{

    int N = 4;
    int *ptr2 = &N;

    cout << "Pointer ptr2 before Addition: ";
    cout << ptr2 << endl;

    // Addition of 4 to ptr2
    ptr2 = ptr2 + 4;
    cout << "Pointer ptr2 after Addition: ";
    cout << ptr2 << endl;

    return 0;
}