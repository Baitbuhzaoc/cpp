#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b(n-m+1);
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < m; ++i)
    {
        b[0] += a[i];
    }
    for (int i = 1; i < n-m; ++i)
    {
        b[i] = b[i - 1] - a[i - 1] + a[i + m - 1];
    }
    sort(b.begin(), b.end());
    cout<<b[0];
}