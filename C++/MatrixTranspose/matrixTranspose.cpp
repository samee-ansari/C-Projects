#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
char answer = 'y';
int main()
{
    // initiating looping structure
    do
    {
        int array_A[2][2];
        int i = 0, j = 0;
        int m, n = 0;
        int trace = 0;
        int determinant = 0;

        // Input for number of rows and columns
        cout << "Please enter the number of rows = " << endl;
        cin >> m;
        cout << "Please enter the number of columns = " << endl;
        cin >> n;
        // Type of matrix declaration
        if (m == n)
            cout << "This is a square matrix\n\n ";

        else if (m != n)

            cout << "This is not a square matrix\n";

        // Reading the matrix values
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cout << "Enter element " << i << " " << j << " ";
                cin >> array_A[i][j];
            }
        }
        // Displaying the given matrix
        cout << "The given matrix is :: \n\n";
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cout << "\t" << array_A[i][j];
            }
            printf("\n\n");
        }
        // Transpose the matrix values
        for (j = 0; j < n; ++j)
            for (i = 0; i < m; ++i)
            {

                cout << "element " << i << " " << j << " "
                     << array_A[i][j] << endl;

                // Condition logic to get trace value
                if (i == j)
                    trace = trace + array_A[i][j];
            }
        // Displaying the user with trace and determinant values
        cout << "Trace result is " << trace << "\n";
        determinant = (array_A[0][0] * array_A[1][1]) - (array_A[0][1] * array_A[1][0]);
        if (i != 2 && j != 2)
            cout << "There is no determinant" << endl;
        else
            cout << "Determinant is " << determinant << endl;
        cout << "Would you like to calculate another matrix? " << endl;
        cout << "(Y/N)\n";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');
    system("pause");
    return 0;
}
