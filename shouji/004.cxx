#include <iostream>
using namespace std;
void co(int i)
{
    if (i < 10)
        cout << 0 << i;
    else
        cout << i;
}
int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    for (int i = 1, l = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j, ++l)
        {
            co(l);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1, l = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; ++k, ++l)
        {
            co(l);
        }cout<<endl;
    }
}