#include <iostream>
#include <string>
using namespace std;

int ji(int x, int y, char op)
{
    if (op == 'a')
        return x + y;
    else if (op == 'b')
        return x - y;
    else
        return x * y;
}

int main()
{
    int n;
    cin >> n;
    char last_op = 0;
    for (int i = 0; i < n; ++i)
    {
        string token;
        cin >> token; // 输入之后在判断是数字还是字符
        // 虽然在比较的时候char和int可以交互，但输入就没招了
        int x, y;
        if (token.size() == 1 && (token[0] == 'a' || token[0] == 'b' || token[0] == 'c'))
        {
            last_op = token[0];
            cin >> x >> y;
        }
        else
        {
            x = stoi(token);
            cin >> y;
        }
        int res = ji(x, y, last_op);
        char op_char = (last_op == 'a') ? '+' : (last_op == 'b') ? '-'
                                                                 : '*';
        string expr = to_string(x) + op_char + to_string(y) + "=" + to_string(res);
        cout << expr << endl;
        cout << expr.size() << endl;
    }
    return 0;
}