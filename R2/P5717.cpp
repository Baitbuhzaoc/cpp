#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, t;
    cin >> a >> b >> c;
    if ((a + b - c <= 0) || (a + c - b <= 0) || (b + c - a <= 0))
    {
        cout << "Not triangle";
        return 0;
    }
    else
    {
        if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
        {
            cout << "Right triangle" << endl;
        }
        else if ((a * a < b * b + c * c) && (b * b < c * c + a * a) && (c * c < a * a + b * b))
        {
            cout << "Acute triangle" << endl;
        }
        else
        {
            cout << "Obtuse triangle" << endl;
        }
        if (a == b || b == c || c == a)
        {
            cout << "Isosceles triangle" << endl;
            if (a == b && b == c)
                cout << "Equilateral triangle";
        }
    }
}