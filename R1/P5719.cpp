#include <iostream>
using namespace std;
class a
{
public:
    double n;
    int k;
    void input();
    long long sumN(double n);
    double sumK(double n, int k);
    double chu(double sum, double n);
    double K = 0;
};
void a::input()
{
    cin >> n >> k;
}
long long a::sumN(double n)
{
    long long sum = 0;
    for (double i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
double a::sumK(double n, int k)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sum += i;
            K++;
        }
    }
    return sum;
}
double a::chu(double sum, double n)
{
    return sum / n;
}
int main()
{
    a A;
    A.input();

    double sumK = A.sumK(A.n, A.k);
    long long sumN = A.sumN(A.n) - sumK;
    double result1 = A.chu(sumK, A.K);
    double result2 = A.chu(sumN, A.n - A.K);
    printf("%.1lf %.1lf", result1, result2);
}