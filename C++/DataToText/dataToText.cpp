//(1) write the preprocessing directives
#include <iostream> //cin, cout
#include <cstring>  //string variables
#include <fstream>  //file processing
#include <conio.h>  //clear screen
using namespace std;

//(2) open the scope of the main() method
int main()
{

    //(3) declare and initialize the variables
    static char chrName[100]; // employee name
    double myExpenses;        // individual expense
    char myLabels[100];       // expense label
    int index = 0;            // loop control variable
    int number = 0;           // number of expense items
    double Totalexpense = 0;
    ofstream fout; // file stream output

    //(4) file variable initialization
    fout.open("data.txt");

    //(5) clear the screen
    system("CLS");

    //(6) request the employee name
    cout << "Enter the employee name: " << endl;
    cin.getline(chrName, 100);
    //(7) request the number of expense items
    cout << "Enter the number of expense items: " << endl;
    cin >> number;
    cin.ignore(); // skip [Enter] entry from keyboard;
    fout << "Expense Report:\n"
         << "Employee name: " << chrName << endl;
    //(8) open the looping structure
    while (index < number)
    {

        index++;

        //(9) request the user for an expense item
        cout << "Enter the type of expense: " << endl;
        cin.getline(myLabels, 100);
        cout << "Enter the amount of expense: " << endl;
        cin >> myExpenses;
        //(10) getting total expenses
        Totalexpense += myExpenses;
        //(11) write the data to a text file
        fout << myLabels
             << " expenses: $" << myExpenses << endl;
        cin.ignore(); // skip [Enter] entry from keyboard;4

        //(12) close the scope of the while() loop
    }
    cout << "Total expenses:$" << Totalexpense << endl;
    fout << "Total expenses:$" << Totalexpense << endl;
    //(13) close out file
    fout.close();
    system("pause");
    //(14) close the scope of the main() method
}
