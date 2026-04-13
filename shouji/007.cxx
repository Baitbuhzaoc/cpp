#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cin>> n;
    vector<int> a(1);
    a[0] = n;
    for (; n != 1;)
    {
        if (n % 2 == 1)
            n = n * 3 + 1;
        else
            n = n / 2;
        a.push_back(n);
    }
    for (auto it = a.rbegin(); it != a.rend(); ++it)
    {
        cout << *it << ' ';
    }
}