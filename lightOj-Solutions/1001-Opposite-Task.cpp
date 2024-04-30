#include <iostream>
using namespace std;

void basicIO()
{
    int t, x, a, b;
    cin >> t;
    while (t--)
    {
        cin >> x;

        if (x <= 10)
        {
            a = x;
            b = x - a;
        }
        else
        {
            a = x - 10;
            b = x - a;
        }

        cout << a << " " << b << endl;
    }
}

int main()
{
    basicIO();
    return 0;
}