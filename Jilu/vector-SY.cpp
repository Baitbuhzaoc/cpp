#include <vector>
#include <iostream>
using namespace std;

一、构造函数
vector<T> v()
vector<T> v(n)	                n：初始元素个数
vector<T> v(n,val)	            n：元素个数,val：元素值
vector<T> v(first,last)	        迭代器范围 [first, last)
vector<T> v(other)         	    other：另一个 vector;
vector<T> v(std::move(other))	other：另一个 vector;
vector<int> v={1,2,3};	        il：初始化列表

二、容量与大小
size()	        size_t	元素个数
empty()	        bool	是否为空
capacity()	    size_t	当前已分配内存可容纳的元素数
resize(n)	    void	将大小改为 n 变大则值初始化
resize(n, val)	void	将大小改为 n 变大则用 val 填充
reserve(n)	    void	预分配至少 n 个元素的内存
shrink_to_fit()   void    请求释放多余容量;
max_size()        size_t  理论上可容纳的最大元素数

三、元素访问
v[i]	    T&	下标访问，无边界检查
v.at(i)	    T&	下标访问，越界抛出异常
v.front()	T&	第一个元素
v.back()	T&	最后一个元素
v.data()	T*	指向底层数组的指针

四、添加元素
operator=(const vector&)	vector&	拷贝赋值
operator=(vector&&)		    vector&	移动赋值(C++11)
operator=(il)	        	vector&	列表赋值(C++11)
assign(n, val)		        void	用 n 个 val 替换内容
assign(first, last)		    void	用迭代器区间替换内容
assign(il)		            void	用列表替换内容(C++11)

push_back(val)	        void	        尾部添加
emplace_back(args...)	T&	            尾部原地构造(比 push_back 更高效)
insert(pos, val)	    iterator	    在 pos 前插入
insert(pos, n, val)	    iterator	    在 pos 前插入 n 个 val

五、删除元素
v.pop_back()	        无	        删除最后一个元素
v.erase(pos)	        迭代器位置	 删除指定元素
v.erase(first, last)	迭代器区间	 删除区间内元素
v.clear()	            无	        清空所有元素

六、其他
v.swap(other)	        交换两个 vector 的内容
v == v2	                比较是否相等(包括<,>,!=,...)
v.begin()	迭代器	     指向第一个元素
v.end()	    迭代器	     指向最后一个元素之后
v.rbegin()	反向迭代器	 指向最后一个元素
v.rend()	反向迭代器	 指向第一个元素之前
