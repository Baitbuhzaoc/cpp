#include <iostream>
using namespace std;
int main()
{
    int n, m, x = 0, l[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> n >> m;
    if (n % 100 != 0 && n % 4 == 0)
        x = 1;
    else if (n % 400 == 0)
        x = 1;
    cout << l[x][m - 1];
}