#include <iostream>
using namespace std;

int main()
{
    int marks = 75;

    if (marks >= 90)
        cout << "Congrats you have got A grade";
    else if (marks >= 70)
        cout << "Congrats you have got B grade";
    else if (marks >= 50)
        cout << "Congrats you have got C grade";
    else if (marks >= 30)
        cout << "Congrats you have got D grade";
    else
        cout << "Oops ! we are fail";

    return 0;
}