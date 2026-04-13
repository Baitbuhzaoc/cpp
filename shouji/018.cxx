#include <iostream>
#include <string>
#include <vector>
#include <sstream> // for stringstream
#include <cctype>  // for tolower
using namespace std;

int main()
{
    // 1. 读取目标单词
    string target;
    cin >> target;

    // 2. 将目标单词全部转为小写（不区分大小写）
    for (char &c : target)
    {
        c = tolower(c);
    }

    // 3. 忽略输入行末尾的换行符，准备读取整行句子
    cin.ignore();

    // 4. 读取整行句子
    string line;
    getline(cin, line);

    // 5. 用 stringstream 分割单词
    stringstream ss(line);
    string word;
    vector<int> positions; // 存储匹配的位置
    int idx = 0;           // 当前单词的位置（从0开始）

    while (ss >> word)
    {
        // 将当前单词转为小写
        for (char &c : word)
        {
            c = tolower(c);
        }
        // 比较
        if (word == target)
        {
            positions.push_back(idx);
        }
        ++idx;
    }

    // 6. 输出结果
    if (positions.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (size_t i = 0; i < positions.size(); ++i)
        {
            if (i != 0)
                cout << " ";
            cout << positions[i];
        }
        cout << endl;
    }
    return 0;
}