#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> b1 = {"XXX", "..X", "XXX", "XXX", "X.X", "XXX", "XXX", "XXX", "XXX", "XXX"};
vector<string> b2 = {"X.X", "..X", "..X", "..X", "X.X", "X..", "X..", "..X", "X.X", "X.X"};
vector<string> b3 = {"X.X", "..X", "XXX", "XXX", "XXX", "XXX", "XXX", "..X", "XXX", "XXX"};
vector<string> b4 = {"X.X", "..X", "X..", "..X", "..X", "..X", "X.X", "..X", "X.X", "..X"};
vector<string> b5 = {"XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX"};

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;          // 直接读取数字串
    // 如果输入的数字串长度与 n 不符，可忽略 n 直接用 s.length()
    vector<int> a;
    for (char ch : s) {
        a.push_back(ch - '0');
    }

    for (auto it = a.begin(); it != a.end() - 1; ++it) {
        cout << b1[*it] << '.';
    }
    cout << b1[a.back()] << endl;

    for (auto it = a.begin(); it != a.end() - 1; ++it) {
        cout << b2[*it] << '.';
    }
    cout << b2[a.back()] << endl;

    for (auto it = a.begin(); it != a.end() - 1; ++it) {
        cout << b3[*it] << '.';
    }
    cout << b3[a.back()] << endl;

    for (auto it = a.begin(); it != a.end() - 1; ++it) {
        cout << b4[*it] << '.';
    }
    cout << b4[a.back()] << endl;

    for (auto it = a.begin(); it != a.end() - 1; ++it) {
        cout << b5[*it] << '.';
    }
    cout << b5[a.back()] << endl;

    return 0;
}