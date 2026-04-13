#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class stu
{
  public:
    int a;
    int b;
    int c;
    void cinds();
};
bool Q(stu m, stu n)
{
    int aa = abs(m.a - n.a);
    int bb = abs(m.b - n.b);
    int cc = abs(m.c - n.c);
    int A = abs(m.a + m.b + m.c - n.a - n.b - n.c);
    if (aa < 6 && bb < 6 && cc < 6 && (A < 11))
        return true;
    else
        return false;
}
void stu::cinds()
{
    cin >> a >> b >> c;
}
int main(int argc, char *argv[])
{
    int n, count = 0;
    cin >> n;
    vector<stu> d(n);
    for (int i = 0; i < n; i++)
    {
        d[i].cinds();
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (Q(d[i], d[j]))
                count++;
        }
    }
    cout << count;
}