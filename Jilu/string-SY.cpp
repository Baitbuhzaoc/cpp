#include <string>
#include <iostream>
using namespace std;
int main()
{
    size_t;        // 指处理内存大小;
    __SIZE_TYPE__; // 指处理容器索引;// 二者混用问题不大，但是不可以和int混用;
    auto;          // 自动推断类型;
    npos;          // 值为size_t-1;

    string 支持所有关系运算符;
    ==, !=, <, >, <=, >=，按字典序比较;
    也可用 compare 函数返回整数： int cmp = a.compare(b); // 0 相等，负值表示 a < b

    1.构造;
    string s1 = 'g';
    string s2(s1);
    string s2(std::move(s1))
        转移资源s1 变空;
    string s("hello");
    string s(5, 'a');
    string s("hello world", 6, 5)
        从索引6开始取5个字符 → "world";
    string s(begin, end)
        如 s(vec.begin(), vec.end());
    string s{'a', 'b', 'c'};

    2.容量与大小;
    size() / length() __SIZE_TYPE__;
    capacity() __SIZE_TYPE__;
    empty() 是否为空 bool;
    reserve(n) 预分配至少 n 个字符的内存;
    resize(n, c) 将字符串大小改为n 若变大则用 c 填充;
    shrink_to_fit() 请求释放多余内存;
    max_size() 理论上能存放的最大字符数 __SIZE_TYPE__;

    3.元素访问;
    非成员函数 swap(s1, s2) 可交换两个字符串的内容;
    s[i] 无边界检查，越界行为未定义 char &;
    s.at(i) 有边界检查 char &;
    s.front() 第一个字符的引用 char &;
    s.back() 最后一个字符的引用 char &;
    s.data() 返回指向底层字符数组的指针 char *;
    s.c_str() 返回C风格 const char *，以 \0 结尾;

    5.赋值与拼接;
    s = "new" 或 s.assign("new") string &;
    s += "t" 或 s.append("tail") string &;
    s.insert(pos, "str") string &;
    s.append(3, 'x') 尾部追加 string &;
    s.append(begin, end) 范围追加 string &;

    6.查找;
    s.find(str, pos) 从 pos(省略则默认为0) 开始查找子串 str 第一次出现的位置 __SIZE_TYPE__ 未找到返回 npos;
    s.rfind(str, pos) 从 pos 开始逆向查str的第一次出现 __SIZE_TYPE__;
    s.find_first_of(str, pos) 查找第一个属于 str 中任一字符的位置 __SIZE_TYPE__;
    s.find_last_of(str, pos) 逆向查找最后一个属于 str 中任一字符的位置 __SIZE_TYPE__;
    s.find_first_not_of(str, pos) 查找第一个不在 str 中的字符 __SIZE_TYPE__;
    s.find_last_not_of(str, pos) 逆向查找第一个不在 str 中的字符 __SIZE_TYPE__;

    7.子串处理;
    s.substr(pos, count) 返回从 pos 开始，长度为 count 的子串 string;
    s.replace(pos, count, str) 将从 pos 开始的 count 个字符替换为 str string &;
    s.replace(iter1, iter2, str) 用迭代器范围替换 string &;

    8. s.erase(pos, count) 删除从 pos 开始的 count 个字符(默认 count = npos) string &;
    s.erase(iter) 删除迭代器指向的字符, 返回下一个迭代器;
    s.erase(first, last), 返回下一个迭代器;
    s.clear() 清空所有字符, size() 变为 0;
    s.pop_back() 删除最后一个字符;

    10. 字符串转换;
    数值转字符串;
    to_string(数值) → 返回 string;
    字符串转数值;
    stoi, stol, stoll, stoul, stoull → 整数;
    stof, stod, stold → 浮点数;

    11. 迭代器 支持正向、反向、常量迭代器：
}