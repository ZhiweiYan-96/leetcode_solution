# std::map
Method: inert, erase,swap,clear,emplace,find,count,lower_bound,upper_bound,equal_range

Tips:
1. 如果已经存在，insert会失败，这时候应该使用[]赋值
2. find()如果失败，返回 aMap.end()

遍历：

```
for(auto iter = aMap.begin(); iter != aMap.end(); ++iter){
	key = (*iter).first;
	value = (*iter).second;
}
```

# std::string

Method
1. 字串：
```c++
        substr(int pos=0,int n=npos)
```
2. 搜索：
```c++
        int find(char c,int pos=0)
        int find(char *s, int npos=0)
```
3. 替代
```c++
string &replace(int p0, int n0,const char *s);//删除从p0开始的n0个字符，然后在p0处插入串s
string &replace(int p0, int n0,const char *s, int n);//删除p0开始的n0个字符，然后在p0处插入字符串s的前n个字符
string &replace(int p0, int n0,const string &s);//删除从p0开始的n0个字符，然后在p0处插入串s
string &replace(int p0, int n0,const string &s, int pos, int n);//删除p0开始的n0个字符，然后在p0处插入串s中从pos开始的n个字符
string &replace(int p0, int n0,int n, char c);//删除p0开始的n0个字符，然后在p0处插入n个字符c
```
4. 插入
```c++
string &insert(int p0, const char *s);
string &insert(int p0, const char *s, int n);
string &insert(int p0,const string &s);
```

5. 与数字类型之间的转换
    a.数字转字符串
```c++
string to_string (int val);
string to_string (long val);
string to_string (long long val);
string to_string (unsigned val);
string to_string (unsigned long val);
string to_string (unsigned long long val);
string to_string (float val);
string to_string (double val);
string to_string (long double val);
```
to_string方法基本覆盖了所有的转换形式
  b. 字符串转数字
  stoi,atoi. stoi的输入参数类型是const string, atoi的输入类型是const char*
  除此还有soi/stol/stoll等方法


# std::enum
用法
```c++
enum color_set {RED,BLUE,WHITE,BLACK}; b
color_set color1,color2;  定义枚举变量
```

# std::set
set内部似乎能够自动记录顺序，所以for(auto ele: aSet)的时候自动是有序的

# std::sort 

1. Compare 函数：	

   Binary function that accepts two elements in the range as arguments, and returns a value convertible to `bool`. The value returned indicates whether the element passed as first argument is considered to *go before the second*  in the specific *strict weak ordering* it defines.
   The function shall not modify any of its arguments.
   This can either be a function pointer or a function object.

   严格小于的语义

2.  example 

   ```c++
   ​```
   bool custom_comp(const vector<int> & a, concst vector<int>  &b){
   	return a[0]<b[0];
   }
   
   ​```	
   ```

   

   

# std::vector 

1. erase

   ```c++
   iterator erase(const_interator position);
   
   iterator erase(const_interator first, const_iterator last)
   ```

   第一个api, 删除第position个元素

   第二个,删除[first,last)之间的所有元素



# std::stack 

1. 方法：

   back(); push_back(); pop_back();



# std::list

1. Method

```c++
  front() //返回第一个元素
  back()  //
  insert() //
  push_back()
  emplace_back()
  pop_back()
  push_front()
  emplace_front()
  pop_font()
```

Tips: list是对链表的封装，对于有大量插入和删除的问题比较合适。但是,in natural,链表对随机读取应该是不行的，所以写代码的时候要避免[]操作



# std::deque 

1. Method

   ```c++
   pop_back()
   pop_front()
   push_back()
   push_front()
   insrt(iterator pos,size_type num, const TYP & val); //pos前插入num个val值
   void insert(iterator pos, input_iterator start,input_iterator end); //插入从start到end范围的元素到pos前面
   at()
   ```

   



# std::queue

```
back()
empty()
front()
pop()
push()
size()
```

