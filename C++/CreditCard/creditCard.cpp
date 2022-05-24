#include <iostream>
#include <iomanip>
using namespace std;

// Credit Card Program
// Mohammed Ansari- Programmer

int main()
{

    // Declaring Variables
    char answer = 'Y', card = 'Y', again = 'Y';
    double credit = 0.0, tax = 0.0;
    const double rate = 0.06;
    double discountOne = 0.05, discountTwo = 0.10;

    // Declaring loop statement
    while (again == 'Y' || again == 'y')
    {

        // Entering data to be processed
        cout << "Is this a credit card purchase? (Y/N)\t";
        cin >> card;
        cout << "Please enter the total purchase: \t";
        cin >> credit;

        // Adding discounts
        if (credit >= 100.00 && (card == 'N' || card == 'n'))
            credit *= (1.00 - discountOne);

        if (credit >= 20.00 && (card == 'Y' || card == 'y'))
            credit *= (1.00 - discountTwo);

        // Output Settings
        cout << setiosflags(ios::fixed | ios::showpoint);
        cout << setprecision(2);

        // Processing of Data and Output generation
        cout << "\nThe subtotal is: \t$" << credit << endl;
        tax = credit * 0.06;
        cout << "The tax is:        \t$" << tax << endl;
        credit += tax;
        cout << "The total due is:  \t$" << credit << endl;
        // Thank you Comment
        cout << "\nThank you for your purchase\n\n";

        // Executing Loop
        cout << "Enter another purchase(Y or N)?\n";
        cin >> again;
        cout << "\n";
    }
    tax = 0.0;
    system("Pause");
    return 0;
}
