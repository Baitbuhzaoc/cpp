#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n, m = 0, c, count = 0;
    for (int i = 1; i <= 7; i++)
    {
        cin >> n1 >> n2;
        n = n1 + n2;
        if (n - 8 > m)
        {
            m = n - 8;
            c = i;
            count++;
        }
    }
    if (count == 0)
        cout << "0";
    else
        cout << c;
}