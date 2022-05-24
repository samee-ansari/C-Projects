#include <iostream>
using namespace std;

// place function prototype here
double Compute(int, double, double);

int main()
{
    // declare local variables
    char name[30];
    /*char month[20]; (For 2nd scenario)*/ 
    int num = 0;
    double commission = 0;
    double salary = 0;
    double sales = 0;

    cout << "Welcome to the commission application\n";
    // place call to the function here
    cout << "Enter the employee name \n";
    cin.getline(name, 30);
    cout << "Enter the employee id number \n";
    cin >> num;
    cout << "Enter the employee salary \n";
    cin >> salary;
    cout << "Enter the employee sales \n";
    cin >> sales;
    /*cout << "Please enter the month of sale\n"; (For 2nd scenario)
    cin >> month;*/
    cout << "\n";
    commission = Compute(num, salary, sales);
    cout << "Commission report for ";
    cout << name << "\n";
    cout << "id number \t" << num << endl;
    cout << "monthly salary \t"
         << "$" << salary << endl;
    cout << "monthly sales \t"
         << "$" << sales << endl;
    cout << "commission \t"
         << "$" << commission << endl;
    /*cout << "Month of sales\t" << "$" << month << endl; (For 2nd scenario)*/

    cout << "\n";
    system("pause");
    return 0;
}
// place function definition here
double Compute(int number, double salary, double gross_sales)
{
    cout << "commission report for employee " << number << endl;
    if (gross_sales > 15000)
        return gross_sales * 0.05;
    /*else if(gross_sales <= 15000)
    return(gross_sales*0.05) + 200; (For 2nd scenario)*/
    return 0;
}
