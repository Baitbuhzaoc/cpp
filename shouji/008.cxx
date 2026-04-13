#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<long long> a(1);
    cin >> a[0];
    for (int i = 1; *--(a.end()) != 0; i++)
    {
        cin >> a[i];
    }
    for (auto it = (++a.rbegin()); it != a.rend(); it++)
    {
        cout << *it << ' ';
    }
}