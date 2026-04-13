#include <iostream>
#include <cmath>
using namespace std;

bool zhi(int n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int fanh(int m, int n)
{
    int p;
    if (m % n == 0)
    {
        p = m / n;
        if (zhi(p))
            return p;
    }
    else
        return 0;
}
int main(int argc, char *argv[])
{
    int m;
    cin >> m;
    if (m == 1 || m == 2)
    {
        cout << m;
        return 0;
    }
    int p = fanh(m, 2);
    if (p != 0)
    {
        cout << p;
        return 0;
    }
    for (int n = 3; n * n <= m; n += 2)
    {
        p = fanh(m, n);
        if (p != 0)
        {
            cout << p;
            return 0;
        }
    }
}