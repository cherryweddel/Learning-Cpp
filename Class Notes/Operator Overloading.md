# 运算符重载
你可以把运算符重载看作一种特殊的函数。
## 语法规则
例如Date类的加法：
```c++
Date d1,d2;
d2=d1+3;
//This is equal to
d2=d1.operator+(3);
```
运算符重载相当于一类特殊的函数。
### 需要注意的是
用成员函数重载n元运算符时，参数个数为n-1;  

用传统表达式方式调用运算符重载函数时，运算符左侧**一定要是对象**！

## 友元函数实现运算符重载
在类外用friend声明的外部函数成为类的友元函数。友元函数可以访问类中的所有成员。  
语法：
```c++
//Date.h
class Date{
public:
    Date(...);
    void setDate(...);
    ...
    friend Date operator+(int,const Date&);
private:
    ...
}
```
---
```c++
//Date.cpp
Date operator+(int i,const Date& d)
{
    Date temp;
    ...
    return temp;
}
```
---
```c++
//main.cpp
int main()
{
    Date d1,d2,d3;
    d3=10+d1;//调用友元函数
    //需要注意的是，如果10在+号的左边必须使用友元函数（Why?）
}
```
### 需要注意的是
使用成员函数重载的运算符：运算符的**左操作数必须为对象**；  
使用友元函数重载的运算符：**操作数顺序与参数顺序一致**；  
双目运算符“=、（）、[]、->”只能重载为**成员函数**。

## ++
主要注意前置自增和后置自增的区别。  
前置自增是先返回结果再+1；  
后置自增是先+1再返回结果。  
如：
```c++
Date &operator++();//前置自增
Date operator++(int);//后置自增
```
## C++标准输入、输出流
流中的数据被当成无结构的的字节序。

### ignore函数
```c++
istream& ignore(streamsize num=1,int delim=EOF)
```
当两个参数都取默认值时，丢掉一个字符。

**流运算符的重载只能用友元函数实现！**

```c++
//PhoneNumber.h
class PhoneNumber
{
public:
    friend std::ostream &operator<< (std::ostream &,const PhoneNumber &);
    friend std::istream &operator>>(std::istream &,PhoneNumber &);
private:
    ...
}
```
---
```c++
//PhoneNumber.cpp
ostream &operator<<(ostream &output,const PhoneNUmber &number)
{
    output<< "("<<number.areaCode<<")"<<number.exchange<<"-"<<number.line;
    return output;
}

istream &operator>> (istream &input,PhoneNumber &number)
{
    input.ignore();
    input >> setw(3)>>number.areaCode;
    input.ignore(2);
    input >> setw(3)>>number.exchange;
    input.ignore();
    input>>setw(4)>>number.line;
    return input;
}
```

## 需要注意
运算符函数可以是成员函数或全局函数,出于性能方面的考虑,全局函数通常指定为友元函数。  
如果要重载()、[]、->或者任何赋值运算符,运算符重载函数必须声明为类的成员函数。  

成员函数重载运算符时,最左边(或者只有最左边)的操作数必须是运算符的一个类对象(或者该类对象的引用)。
如果左操作数必须是一个不同类的对象或者是一个基本类型对象,那么该运算符函数必须作为全局(友元)函数来实现。

## new和delete
new在程序运行时根据需要动态分配空间。    
new <类型>  
new <类型> (初值)  
new <类型> [长度]  
返回值为空间首地址。    

new分配的空间不会被自动回收，一定要在动态空间生命期终止前用delete语句进行回收，否则该空间会在内存中逻辑消失，直到计算机重新启动，这被称为**内存泄露**。

语法：
```c++
double *dPtr=new double(3.14159);
Time *timePtr=new Time(12,45,0);
char *nameArry=new char[10];
int *scoreArry=new int[students];

delete dPtr;
delete timePtr;//释放单个动态空间
delete [10]nameArry;//释放制定个连续动态空间
delete []scoreArry;//释放申请的所有连续动态空间
```

### 指针悬挂
```c++
int *p=new int(10);
int *q=p;
delete p;
delete q;
```

## 赋值运算符重载
实际上，系统为每个类都生成了一个缺省的赋值运算符重载函数，在相同类型的示例之间可以直接相互赋值。  
但是对于某些特殊的情况，该缺省的赋值运算符会出现一些问题，比如指针悬挂。  

语法：
```c++
//缺省的赋值运算符重载函数
C& C::operator=(const C &m)
{
    x=m.x;
    return *this;
}

//更好的方法
C& C::operator=(const C &m)
{
    n=m.t;
    if(x) delete[]x;
    x=new double[n];
    for (int i=0;i<n;i++) x[i]=m.x[i];
    return *this;
}
```
