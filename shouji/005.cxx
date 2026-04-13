#include <iostream>
#include <cstring>
using namespace std;

class chuan
{
  public:
    int n = 1;
    char c[n][n + 1];
    char *xuan(char *a, char *b);
    char *jx(char *a, char *b);
};
char *chuan::xuan(char *a, char *b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[j][n - 1 - i] = b[i][j];
        }
    }
    return &b[0][0];
}
char *chuan::jx(char *a, char *b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][n - 1 - j] = b[i][j];
        }
    }
    return &b[0][0];
}
int main(int argc, char *argv[])
{
    chuan x, y, z;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x.c[i][j];
        }
    }
    if (memcmp(x.c, chuan::xuan(x.c, y.c)) == 0)
        cout << 1;
    //else if (memcmp(x.c, chuan::xuan(chuan::xuan(x.c, y.c), z.c)) == 0)
    //cout << 2;
    //else if (memcmp(x.c, chuan::xuan(chuan::xuan(chuan::xuan(x.c, y.c), z.c), y.c)) == 0)
    //cout << 3;
}