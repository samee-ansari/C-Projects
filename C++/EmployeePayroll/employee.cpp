#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //(1)  declare and initialize the variables
    double gross = 0, hours = 0, rate = 0, fedTax = .15, stateTax = .03, totalTax = 0,
           net_pay = 0, overtime = 0;
    int employeeNum = 0;
    char answer = 'y';
    do
    {
        // (2) prompt user and read the employee number
        cout << "Please enter the employee number\n";
        cin >> employeeNum;

        // (3) prompt user and read the number of hours worked
        cout << "\nPlease enter the number of hours worked\n";
        cin >> hours;

        // (4) prompt user and read the employee hourly wage
        cout << "\nPlease enter the hourly wage\n";
        cin >> rate;
        cout.setf(ios::fixed);
        cout.precision(2);

        // (5) use a selection control structure to determine the gross pay
        if (hours <= 40)
            gross = rate * hours;
        else
            gross = (hours - 40) * rate * 1.5 + 40 * rate;

        // (6) determine the federal and state taxes

        totalTax = fedTax * gross + stateTax * gross;

        // (7) determine whether or not ove3rtime pay is included
        if (hours > 40)
            // calculating excess hours above 40 and pay time and half
            overtime = hours - 40 * rate * 1.5;

        else
            overtime = 0;

        // (8) determine the net pay

        net_pay = gross - totalTax;
        cout << "\nPayRoll Of Designated Employee :" << endl;

        // (9) display the employee number
        cout << "\nEmployee ID:\t\t\t " << setw(10) << employeeNum << endl;
        // (10) display the employee number of hours worked
        cout << "Employee hours:\t\t\t " << setw(10) << hours << endl;
        // (11) display the hourly wage
        cout << "Employee hourly wage:\t\t$" << setw(10) << rate << endl;
        // (12) display the gross pay
        cout << "Employee gross pay:\t\t$" << setw(10) << gross << endl;
        // (13) display the total tax deductions
        cout << "Employee total tax:\t\t$" << setw(10) << totalTax << endl;
        // (14) display the net pay
        cout << "Employee net pay:\t\t$" << setw(10) << net_pay << endl;
        // (15) display whether or not overtime pay is included
        cout << "Is Employee Overtime?\t\t" << setw(10) << ((overtime < 0) ? "YES" : "NO")<< "\n";
        //(16) Creating loop for payroll
        cout << "\nWould you like to Calculate another Employee's PayRoll?" << endl;
		cout << "(Y/N)?\n";
		cin >> answer;
    } while (answer == 'y' || answer == 'Y');

    system("Pause");
    return 0;
}
