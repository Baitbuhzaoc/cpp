#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    vector<long long> a(1);
    cin >> a[0];
    for (; a.back() != 0;)
    {
        long long t;
        cin >> t;
        a.push_back(t);
    }
    for (auto it = ++a.rbegin(); it != a.rend(); it++)
    {
        cout << *it << ' ';
    }
}