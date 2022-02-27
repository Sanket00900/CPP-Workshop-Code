
#include <iostream>
using namespace std;
int main()
{
     int arr[5] = {23423, 54, 4, 34, 16};
     cout << &arr[0];
     cout << "\n"
          << (&arr[1]);
     cout << "\n"
          << (&arr[2]);
     cout << "\n"
          << (&arr[3]);
     cout << "\n"
          << (&arr[4]);
}