#include <iostream>
using namespace std;
void CalcAvg();

int main()
{
    CalcAvg();

    cout << endl
         << endl;
    system("pause");
    return 0;
}
// Variable input
void CalcAvg()
{
    int week[] = {4, 11, 18, 25};
    double miles[4] = {};
    double gallons[4] = {};
    char a[] = "Please input Gallons and Miles for the week ";
    char b[] = "\n";
    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 0; i < 4; i++)
    {
        cout << a << i + 1 << b;
        cin >> gallons[i] >> miles[i];
    }
    // Starting a heading
    cout << "Week of\t\t\t Gallons\t\tMiles\t\tAverage\n";
    // Process display outcomes
    double gallonsTotal = 0, milesTotal = 0, Average = 0, AverageTotals = 0;
    for (int i = 0; i < 4; i++)
    {

        gallonsTotal += gallons[i];      // accumulating gallons
        milesTotal += miles[i];          // accumulating miles
        Average = miles[i] / gallons[i]; // Getting Average

        cout << "\nMarch of " << week[i] << "\t\t   " << gallons[i] << "\t\t\t  " << miles[i] << "\t\t " << Average;
    }
    // display grand totals and Average
    cout << "\n-------------------------------------------------------------------------------\n";
    double gallonAverage = gallonsTotal / 4, milesaverage = milesTotal / 4, Average_Total = milesTotal / gallonsTotal;

    cout << "Total\t\t\t   " << gallonAverage << "\t\t\t  " << milesaverage << "\t\t " << Average_Total;
    // Extra Comment
    cout << "\n\nYou need to watch your fuel comsumption buddy.\n";
}
