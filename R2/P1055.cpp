#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[9], c = 0;
    string s;
    cin >> s;
    char *p = &s[0], b, d;
    for (int i = 1; i <= 9; i++)
    {
        a[i - 1] = *p - '0';
        p++;
        if (i == 1 || i == 4 || i == 9)
            p++;
    }
    b = *p;
    for (int i = 1; i <= 9; i++)
    {
        c = c + i * a[i - 1];
    }
    c = c % 11;
    if (c == 10)
        d = 'X';
    else
        d = c + '0';
    if (b == d)
        cout << "Right";
    else
    {
        s[12] = d;
        cout << s;
    }
}