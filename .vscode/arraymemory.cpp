#include <iostream>
using namespace std;
int main()
{
    int marks[3] = {90, 87, 99};

    for (int i = 0; i < 3; i++)
    {
        cout << "memory location of marks stored of student : " << i + 1 << " is" << &marks[i] << "\n";
    }
}