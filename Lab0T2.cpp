#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin  >> n;
    cout << endl;

    int fact = 1;

    cout << "" << n << "! : ";

    for (int i = 1; i <= n; i++)
    {
        fact*=i;

        if (i != n)
        {
            cout << i << "*" ;
        }
        else
            cout << n << " " << endl;

    }

    cout << endl;

    cout << "The Factorial of " << n << " is : " << fact << endl;

}
