#include <iostream>
#include <iomanip>
using namespace std;
// Mohammed Ansari, Student Programmer

int main()
{
    // declare the variables and initialize their values
    double amount = 0, earnings = 0, principal = 0;
    double rate = 0, time = 0;
    char answer = 'y';

    // enter the looping structure to repeat the process
    do
    {
        // prompt the user for data and read the values
        cout << "Compute simple interest and total amount\n"
             << endl;
        cout << "Enter the deposit amount (no $ or comma)" << endl;
        cin >> principal;
        cout << "Enter the annual interest rate as a decimal" << endl;
        cin >> rate;
        cout << "Enter the time of deposit" << endl;
        cin >> time;

        // perform the computations
        earnings = principal * rate * time;
        amount = principal + earnings;

        // display the computations
        cout << "Amount in Account = "
             << setiosflags(ios::fixed | ios::showpoint)
             << setprecision(2) << amount << endl;
        cout << "Simple Interest   = " << setprecision(2) << earnings << endl;
        cout << "\nWould you like to run another calculation?" << endl;
        cout << "(Y/N)?\n";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    return 0;
}
