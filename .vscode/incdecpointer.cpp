#include <iostream>
using namespace std;

int main()
{
    // Integer variable
    int N = 4;

    // Pointer to an integer
    int *ptr1 = &N;
    int *ptr2 = &N;

    cout << "Pointer ptr1 before Increment: ";
    cout << ptr1 << endl;

    // Incrementing pointer ptr1;
    ptr1++;

    cout << "Pointer ptr1 after Increment: ";
    cout << ptr1 << endl;

    // ------------------------------------------------------------------------------

    cout << "Pointer ptr2 before Decrement: ";
    cout << ptr2 << endl;

    // Decrementing pointer ptr1;
    ptr2--;

    cout << "Pointer ptr2 after Decrement: ";
    cout << ptr2 << endl;

    return 0;
}
