#include <iostream>
#include <iomanip> //setprecision函数会【四舍五入】
using namespace std;

int main()
{
    double pi = 3.1415926535;
    cout << fixed << setprecision(3) << pi << endl; // 输出 3.142
    // 设置了小数点之后保留多少，设置一次后统一改变
    cout << setprecision(6) << pi << endl; // 输出 3.1416
    // 是设置总共保留多少位有效数字，但如果之前用了fixed，就变成设置小数点后保留多少位
    cout << defaultfloat;
    // 清空设置
    cout << setprecision(6) << pi;
    return 0;
}