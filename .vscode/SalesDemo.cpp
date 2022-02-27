#include <iostream>

using namespace std;

int main()
{
    int sales[12] = {100, 90, 80, 110, 115, 210, 80, 95, 125, 135, 140, 174};

    int i; // Variable for access sales array index

    for (i = 0; i < 12; i++)
    {
        // Accessing sales value using for loop
        cout << "Month No. : " << i + 1 << " , Sales Value : " << sales[i] << " \n";
    }
    return 0;
}