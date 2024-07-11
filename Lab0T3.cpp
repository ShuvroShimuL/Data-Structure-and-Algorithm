#include <iostream>
using namespace std;

int main ()
{
    int x,y;
    char op;
    cout << "Enter 1st Number  : ";
    cin  >> x;

    cout << "Enter Operator    : ";
    cin  >> op;

    cout << "Enter 2nd Number  : ";
    cin  >> y;

    cout << endl;


    switch (op)
    {
    case '+':
        cout <<" Addition is      : " << x+y;
        break;

    case '-':
        cout <<" Subtraction is   : " << x-y;
        break;

    case '*':
        cout <<"Multiplication is : " << x*y;
        break;
    case '/':
        cout <<" Division is      : " << x/y;
    }

    cout << endl;

}
