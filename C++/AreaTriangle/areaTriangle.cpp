#include <iostream>
using namespace std;
int main(void)
{
    // declare program variables
    double area = 0, base1 = 0, base2 = 0, height = 0;
    // input variables by receiving values
    cout << "\n";
    cout << "Please enter the base1\n";
    cin >> base1;
    cout << "Please enter the base2\n";
    cin >> base2;
    cout << "Please enter the height\n";
    cin >> height;
    // process outcome with assignment statement
    area = .5 * (base1 + base2) * height;
    // display outcome results to user
    cout << "\n";
    cout << "A trapezoid with a short base of " << base1
         << " and a long base of " << base2
         << " and height " << height;
    cout << "\n";
    cout << "\nhas an area of " << area
         << " square units. " << endl
         << endl;
    cout << "Press [ENTER] to close window\n";
    cin.get();
    cin.get();
    return 0;
}
