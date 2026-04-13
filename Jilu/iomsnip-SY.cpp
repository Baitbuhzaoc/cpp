//<iomanip> 库常用内容
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double pi = 3.1415926535;
    // setprecision函数会【四舍五入】
    cout << fixed << setprecision(3) << pi << endl;
    // 设置了小数点之后保留多少，设置一次后统一改变
    cout << setprecision(6) << pi << endl;
    // 理应是设置总共保留多少位有效数字，但如果之前用了fixed，就变成设置小数点后保留多少位
    cout << defaultfloat;
    // 清空设置
    cout << setprecision(6) << pi;
    // 总共保留6位有效数字
    return 0;
}
/*
setw(int n)             设置下一个输出字段的最小宽度为 n（只对下一个输出有效）         cout << setw(10) << 42;
setfill(char c)         设置宽度不足时的填充字符（默认空格，且右对齐）                 cout << setfill('*');
left / right / internal 设置对齐方式（左 / 右 / 符号左对齐值右对齐）                  cout << left << setw(10) << 42;
setprecision(int n)     设置浮点数输出的精度                                         cout << setprecision(3);
fixed                   使用定点小数表示法（与 setprecision 配合指小数位数）          cout << fixed << setprecision(2);
scientific              使用科学计数法（如 1.23e+02）                                cout << scientific;
hex / dec / oct         设置整数的进制（十六、十、八进制）                            cout << hex << 255;

showbase / noshowbase   是否显示进制前缀（如 0x、0）                        cout << showbase << hex << 255;
uppercase / nouppercase 十六进制字母及科学计数法 E 是否大写                 cout << uppercase << hex << 255;
showpoint / noshowpoint 强制显示浮点数的小数点及尾随零                      cout << showpoint << 3.0;
*/