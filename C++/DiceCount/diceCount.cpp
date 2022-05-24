#include <iostream>
#include <cstdlib> //srand(), rand() RAND_MAX
#include <ctime>   //time
using namespace std;

int main()
{
    /*cout << RAND_MAX << endl;*/
    // simulate roll of a die
    int randomNum = 0;
    int stars;

    int index = 1;
    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0, ct5 = 0, ct6 = 0;
    srand((time(NULL))); // seed random value
    cout << flush;

    for (int i = 0; i <= 20; ++i)

    {

        randomNum = (1 + rand() % 6);

        // perform frequency analysis
        switch (randomNum)
        {
        case 1:
            ++ct1;
            stars = ++ct1;
            break;
        case 2:
            stars = ++ct2;
            break;
        case 3:
            stars = ++ct3;
            break;
        case 4:
            stars = ++ct4;
            break;
        case 5:
            stars = ++ct5;
            break;
        case 6:
            stars = ++ct6;
            break;
        } // end switch
        cout << randomNum << endl;

        /*for (int stars=0;stars<=ct1; i++)
            cout << "*"<<stars;
        cout << endl;*/

    } // end for
    cout << "\nResulting die frequencies for the roll of a die";
    cout << "\nCount 1's: " << ct1 << endl
         << "Count 2's: " << ct2 << endl
         << "Count 3's: " << ct3 << endl
         << "Count 4's: " << ct4 << endl
         << "Count 5's: " << ct5 << endl
         << "Count 6's: " << ct6 << endl;

    system("Pause");
}
