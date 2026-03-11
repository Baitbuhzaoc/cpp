#include <iostream>
using namespace std;
int main()
{
    float p, q, t;
    int a, b, c, d;
    cin >> p;
    t = p * 10;
    a = t / 1000;
    b = t / 100 % 10;
    c = t / 10 % 10;
    d = t % 10;
    cout << d << "." << c << b << a;
    return 0;
}