#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    vector<int> a(n * n);
    a[n / 2 + 1] = 1;
    int k = n / 2 + 1;
    int c = 1;
    for (int i = 2; i <= n * n; ++i)
    {
        if (k < n)
        {
            a[(n - 1) * n + k + 1] = i;
            k = (n - 1) * n + k + 1;
        }
        else if ((k % n == 0) && (k > n))
        {
            a[k - 2 * n + 1] = i;
            k = k - 2 * n + 1;
        }
        else if (k == n)
        {
            a[2 * n] = i;
            k = 2 * n;
        }
        else if (a[k + 1 - n] == 0)
        {
            a[k + 1 - n] = i;
            k = k + 1 - n;
        }
        else
        {
            a[k + n] = i;
            k = k + n;
        }
    }
    for (int i = 1; i <= n * n; ++c, ++i)
    {
        cout << a[i] << ' ';
        if (c % n == 0)
            cout << endl;
    }
}