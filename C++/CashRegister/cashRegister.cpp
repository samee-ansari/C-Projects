
/*****************************************\
*Program to demonstrate a
*simple cash register program
*written by Samee Ansari(MSA)
\*****************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // declare and initialize the variables
    int quantity = 0;
    double price = 0, subtotal = 0;
    double tax = 0, total = 0;
    double amount_tendered = 0, change = 0;

    // prompt user and receive the data
    cout << "please enter the item price:    ";
    cin >> price;
    cout << "\nplease enter the item quantity: ";
    cin >> quantity;

    // set the output manipulation values
    cout.setf(ios::fixed);
    cout.precision(2);

    // process the input data and display the output
    subtotal = price * quantity;
    cout << "\nsubtotal: \t$" << setw(15) << subtotal << endl;

    tax = subtotal * 0.05;
    cout << "\ntax:      \t$" << setw(15) << tax << endl;

    total = tax + subtotal;
    cout << "\ntotal:    \t$" << setw(15) << total << endl;
    cout << "\nPlease enter in amount to be tendered\n";
    cin >> amount_tendered;
    cout << "\ntotal:      \t$" << setw(15) << total << endl;
    cout << "\nAmount :\t$" << setw(15) << amount_tendered << endl;

    change = amount_tendered - total;
    cout << "\n*********************************"
         << "\nChange =\t$" << setw(15) << change << endl;
    cout << "\nThank you for shopping at MSA. Please come again" << endl;
    cout << "\n\n";
    cout << "press [Enter] to close this window\n";

    // cin.get();
    system("pause");
    return 0;
}
