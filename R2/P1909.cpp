#include <iostream>
using namespace std;
int n;
int A(int a, int b)
{
    int c, d, e;
    c = n / a;
    d = n % a;
    c = c + bool(d);
    e = c * b;
    return e;
}
int main()
{
    int a, b, p, q, l, m, d, e, f;
    cin >> n >> a >> b >> p >> q >> l >> m;
    d = A(a, b);
    e = A(p, q);
    f = A(l, m);
    if (d > e)
    {
        if (e > f)
            cout << f;
        else
            cout << e;
    }
    else if (d > f)
        cout << f;
    else
        cout << d;
}