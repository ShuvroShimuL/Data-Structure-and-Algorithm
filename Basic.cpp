#include <iostream>
#include <climits> // Integer Limits in Header File
using namespace std;

int main ()
{
    cout << "Hello World" << endl;



    int X,Y;

    cout << "X: ";
    cin >> X;

    cout << "Y: ";
    cin >> Y;

    cout << "\nAddition : "       << X+Y;
    cout << "\nSubtraction : "    << X-Y;
    cout << "\nMultiplication : " << X*Y;
    cout << "\nDivision : "       << X/Y << endl;

    cout << "\nThe size of Character is: "   << sizeof(char)        << " bytes";
    cout << "\nThe size of Short is: "       << sizeof(short)       << " bytes";
    cout << "\nThe size of Integer is: "     << sizeof(int)         << " bytes";
    cout << "\nThe size of Long is: "        << sizeof(long)        << " bytes";
    cout << "\nThe size of Long Long is: "   << sizeof(long long)   << " bytes";
    cout << "\nThe size of Float is: "       << sizeof(float)       << " bytes";
    cout << "\nThe size of Double is: "      << sizeof(double)      << " bytes";
    cout << "\nThe size of Long Double is: " << sizeof(long double) << " bytes";
    cout << "\nThe size of Boolean is: "     << sizeof(bool)        << " bytes" << endl;

    cout << "\nThe Sum of 59 and 30 is: " << 59+30 << endl;

    cout << "\nThe Maximum Limit of Integer Data type: "   << INT_MAX;
    cout << "\nThe Minimum Limit of Integer Data type: "   << INT_MIN  << endl;
    cout << "\nThe Maximum Limit of Character Data type: " << CHAR_MAX;
    cout << "\nThe Minimum Limit of Character Data type: " << CHAR_MIN << endl;


}


