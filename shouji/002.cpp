#include <iostream>
#include <vector>
using namespace std;

vector<int> result = { 5, 7, 11};
int p;

void shc3();
void shc5();
void shc7();
bool su(int p); // 素数判断

int main(int argc, char *argv[])
{
    int a, b;
    cin >> a >> b;
    if (b >= 100)
        shc3();
    if (b >= 10000)
        shc5();
    if (b >= 1000000)
        shc7();
    for (int x : result)
    {
        if (x >= a && x <= b)
            cout << x << endl;
    }
    return 0;
}

bool su(int p)
{
    if (p < 2)
        return false;
    for (int i = 3; i * i <= p; i += 2)
    {
        if (p % i == 0)
            return false;
    }
    return true;
}

void shc3()
{
    for (int d1 = 1; d1 <= 9; d1 += 2) // 最高位取奇数，保证生成的数为奇数
    {
        for (int d2 = 0; d2 <= 9; d2++)
        {
            p = 100 * d1 + 10 * d2 + d1; // 形式：d1 d2 d1
            if (su(p))
                result.push_back(p);
        }
    }
}

void shc5()
{
    for (int d1 = 1; d1 <= 9; d1 += 2)
    {
        for (int d2 = 0; d2 <= 9; d2++)
        {
            for (int d3 = 0; d3 <= 9; d3++)
            {
                p = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1; // 形式：d1 d2 d3 d2 d1
                if (su(p))
                    result.push_back(p);
            }
        }
    }
}

void shc7()
{
    for (int a = 1; a <= 9; a+=2) // 最高位，用a避免与主函数中的a混淆（作用域不同）
    {
        for (int b = 0; b <= 9; ++b)
        {
            for (int c = 0; c <= 9; ++c)
            {
                for (int d = 0; d <= 9; ++d)
                {
                    p = a * 1000000 + b * 100000 + c * 10000 + d * 1000 + c * 100 + b * 10 + a; // 形式：a b c d c b a
                    if (su(p))
                        result.push_back(p);
                }
            }
        }
    }
}