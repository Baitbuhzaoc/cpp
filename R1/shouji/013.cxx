#include <iostream>
#include <vector>
using namespace std;

int n; // 全局变量

void hb(int t1, int t2, vector<bool> &a)
{
    int b[13][2] = {
        {0, 2}, {-1, 1}, {0, 1}, {1, 1}, {-2, 0}, {-1, 0}, {0, 0}, {1, 0}, {2, 0}, {-1, -1}, {0, -1}, {1, -1}, {0, -2}};
    for (int i = 0; i < 13; ++i)
    {
        int x = t1 + b[i][0]-1;
        int y = t2 + b[i][1]-1;
        if (x >= 0 && x < n && y >= 0 && y < n)
            a[x * n + y] = false;
    }
}

void ys(int t1, int t2, vector<bool> &a)
{
    int b[25][2] = {
        {0, 2}, {-1, 1}, {0, 1}, {1, 1}, {-2, 0}, {-1, 0}, {0, 0}, {1, 0}, {2, 0}, {-1, -1}, {0, -1}, {1, -1}, {0, -2}, {2, 2}, {2, 1}, {1, 2}, {-2, 2}, {-2, 1}, {-1, 2}, {2, -2}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, -2}};
    for (int i = 0; i < 25; ++i)
    {
        int x = t1 + b[i][0]-1;
        int y = t2 + b[i][1]-1;
        if (x >= 0 && x < n && y >= 0 && y < n)
            a[x * n + y] = false;
    }
}

int main()
{
    cin >> n;
    vector<bool> a(n * n, true);
    int m, k;
    cin >> m >> k;
    for (int i = 0; i < m; ++i)
    {
        int t1, t2;
        cin >> t1 >> t2;
        hb(t1, t2, a);
    }
    for (int i = 0; i < k; ++i)
    {
        int t1, t2;
        cin >> t1 >> t2;
        ys(t1, t2, a);
    }
    int count = 0;
    for (bool v : a)
        if (v)
            ++count;
    cout << count << endl;
    return 0;
}