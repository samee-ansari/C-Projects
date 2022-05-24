#include <iostream>
using namespace std;
// Program to compute binary logarithm of the given number
// function prototype
int BinaryLog(int);
int main()
{
    // declare and initialize the local variables
    int number = 0;
    int answer = 0;
    char input = 'y' || 'Y';
    // Starting a loop
    do
    {
        // prompt user for an integer
        cout << "Please enter a positive integer = ";
        // store user's response
        cin >> number;
        // call the function
        answer = BinaryLog(number);
        cout << "The binary logarithm of " << number
             << " is " << answer << endl;
        cout << "\nWould you like to run another calculation?" << endl;
        cout << "(Y/N)?\t";
        cin >> input;
        cout << "\n";
    } while (input == 'y' || input == 'Y');
    return 0;
}
// Declaring quotient
int BinaryLog(int num)
{
    int count = 0;
    double quotient = num;
    while (quotient >= 2)
    {
        count++;
        quotient = quotient / 2;
        cout << quotient << endl;
    }
    return count;
}
