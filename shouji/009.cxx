#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class shu
{
  public:
    vector<int> b;
    vector<int> c;
};

int main(int argc, char *argv[])
{
    int l, count, m;
    cin >> l >> m;
    vector<bool> a(l + 1, true);
    shu n;
    for (int i = 1; i <= m; ++i)
    {
        int t;
        cin >> t;
        n.b.push_back(t);
        cin >> t;
        n.c.push_back(t);
    }
    for (int i = 0; i < m; ++i)
    {
        fill(a.begin() + n.b[i], a.begin() + n.c[i]+1, false);//左闭右开
    }
    for (bool i : a)
    {
        if (i)
            count++;
    }
    cout<<count;
}