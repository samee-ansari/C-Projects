#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    // Declaring variables for the program
    char username[10];
    char password = '\0';
    string val = "";
    // Entering username and password
    cout << "Please enter your username\n ";
    cin >> username;
    cout << "Please input password \n";
    password = _getch();
    cout << "*";
    // Password execution for desired characters
    while (password != char(13))
    {
        val.push_back(password);
        password = _getch();
        cout << "*";
    }
    // Displaying final output
    cout << "\nUsername= " << username;
    cout << "\nPassword= " << val << endl;
    cout << "\nYou have successfully logged in";
    cout << "\nEnjoy the rest of your day\n"
         << endl;
    system("pause");
}
