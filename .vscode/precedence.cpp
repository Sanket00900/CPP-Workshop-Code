#include <iostream>
using namespace std;

int main()
{
    int num1 = 1000, num2 = 20, num3 = 500;
    int num4 = 100, num5 = 5, num6 = 500;

    float result = (float)(num3 * num2 + num3 / num4 % num5 - num6);

    /* Precedence : /,*,% > +,-
    (500 * 20 + 500 / 100 % 5 - 500)
    = (10000 + 500 / 100 % 5 - 500)
    = (10000 + 5 % 5 - 500)
    = (10000 + 0 - 500)
    = (10000 - 500)
    = (9500)
     */

    cout << "Result is : " << result;
}