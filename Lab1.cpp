#include<iostream>

using namespace std;

int x = 10;

namespace nsX
{
    int x = 100;
}


namespace nsY
{
    int x = 1000;
}

int main()
{
    int x;

    for ( int i=0; i<10; i++)
    {
        cin >> x;
    }

    return 0;
}
