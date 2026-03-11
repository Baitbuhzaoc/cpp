#include <iostream>
#include <vector>
using namespace std;

// 大数乘法：乘以一个普通整数 n
vector<int> multiply(const vector<int> &a, int n)
{
    vector<int> result;
    int carry = 0;
    for (int digit : a)
    {
        long long prod = (long long)digit * n + carry;
        result.push_back(prod % 10);
        carry = prod / 10;
    }
    while (carry)
    {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}

// 大数加法：两个大数相加
vector<int> add(const vector<int> &a, const vector<int> &b)
{
    vector<int> result;
    int carry = 0;
    size_t i = 0;
    while (i < a.size() || i < b.size() || carry)
    {
        int sum = carry;
        if (i < a.size())
            sum += a[i];
        if (i < b.size())
            sum += b[i];
        result.push_back(sum % 10);
        carry = sum / 10;
        ++i;
    }
    return result;
}

void print(const vector<int> &num)
{
    for (auto it = num.rbegin(); it != num.rend(); ++it)
        cout << *it;
}

int main()
{
    vector<int> sum = {0};
    vector<int> fact = {1};
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        fact = multiply(fact, i);
        sum = add(sum, fact);
    }
    print(sum);
    cout << endl;
    return 0;
}