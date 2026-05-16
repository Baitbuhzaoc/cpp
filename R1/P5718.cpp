#include <iostream>
using namespace std;
class a
{
public:
    int s[100];
    void input(int n);
    int min(int n);
    int t;
};

void a::input(int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
}

int a::min(int n)
{
    t = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] < t)
        {
            t = s[i];
        }
    }
    return t;
}
int main()
{
    int n;
    a A;
    cin >> n;
    A.input(n);
    cout << A.min(n);
}