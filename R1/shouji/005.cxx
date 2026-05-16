#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 关于对方阵多种变换之后相等的判断

bool equal(const vector<string> &a, const vector<string> &b)
{
    return a == b;
}

vector<string> rotate90(const vector<string> &a)
{
    int n = a.size();
    vector<string> res(n, string(n, ' '));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            res[i][j] = a[n - 1 - j][i];
    return res;
}

vector<string> rotate180(const vector<string> &a)
{
    int n = a.size();
    vector<string> res(n, string(n, ' '));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            res[i][j] = a[n - 1 - i][n - 1 - j];
    return res;
}

vector<string> rotate270(const vector<string> &a)
{
    int n = a.size();
    vector<string> res(n, string(n, ' '));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            res[i][j] = a[j][n - 1 - i];
    return res;
}

vector<string> reflect(const vector<string> &a)
{
    int n = a.size();
    vector<string> res(n, string(n, ' '));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            res[i][j] = a[i][n - 1 - j];
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    if (equal(rotate90(a), b))
        cout << 1 << endl;
    else if (equal(rotate180(a), b))
        cout << 2 << endl;
    else if (equal(rotate270(a), b))
        cout << 3 << endl;
    else if (equal(reflect(a), b))
        cout << 4 << endl;
    else
    {

        vector<string> ref = reflect(a);
        if (equal(rotate90(ref), b) ||
            equal(rotate180(ref), b) ||
            equal(rotate270(ref), b))
        {
            cout << 5 << endl;
        }
        else if (equal(a, b))
            cout << 6 << endl;
        else
            cout << 7 << endl;
    }
    return 0;
}