#include <iostream>
#include <string>
//#include <utility>
#include <vector>
using namespace std;

bool zhi(int l)
{
    if (l == 0 || l == 1 || l == 4 || l == 6 || l == 8)
        return false;
    else if (l == 2 || l == 3 || l == 5 || l == 7)
        return true;
}
int main(int argc, char *argv[])
{
    string p;
    cin >> p;
    vector<pair<char, int>> q;
    q.reserve(26);
    for (char a : p)
    {
        int k = 0;
        for (auto b : q)
        {
            if (b.first == a)
            {
                b.second++;
                k = 1;
                break;
            }
        }
        if (k == 0)
            q.push_back({a, 1});
    }
    int m = 1, n = 10;
    for (auto c : q)
    {
        if (c.second > m)
            m = c.second;
        if (c.second < n)
            n = c.second;
    }
    if (zhi(m - n))
    {
        cout << "Lucky Word" << endl
             << m - n;
    }
    else
    {
        cout << "No Answer" << endl
             << 0;
    }
}