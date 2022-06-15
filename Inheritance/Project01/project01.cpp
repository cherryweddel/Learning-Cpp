#include <iostream>
#include <cstring>
using namespace std;

class Date
{
private:
    int year,month,day;
public:
    Date()
    {
        year=2000;
        month=1;
        day=1;
        cout << "Start function!"<< endl;
    }
    Date(int y,int m,int d)
    {
        year = y;
        month = m;
        day = d;
        cout << "Start function!" << endl;
    }
    Date(const Date &t)//拷贝构造函数的参数是该类对象的常引用
    {
        year = t.year;
        month = t.month;
        day = t.day;
        cout << "Start function!" << endl;
    }

    ~Date()
    {
        cout << "End function!" << endl;
    }
    void show() const//常成员函数，不能对成员数据进行修改
    {
        cout << year << "\t" << month << "\t" << day << endl;
    }
};

class Person
{
    string name;
    int age;//常数据成员，不能对其进行任何修改
    char gender;
    Date date;
    static int count;//静态成员，所有此类的对象共用同一片内存空间
public:
    Person(string n,int a,char g,int y,int m,int d):date(y,m,d)
    {
        name = n;
        age = a;
        gender = g;
        count++;
    }
    void show()
    {
        cout << name << "\t" <<age << "\t"<<gender;
        date.show();
        cout << "Person" << count <<endl;
    }
    ~Person()
    {
        count--;
    }
    friend ostream &operator<<(ostream &q,const Person &p);
};
ostream &operator<<(ostream &q,const Person &p)
{
    cout << p.name << "\t" << p.age << "\t" << p.gender << "\t";
    p.date.show();
    return q;
}

int Person::count=0;//静态成员只能在类外进行初始化！

class Student : public Person//注意，使用继承不会继承基类中的构造函数，子类中的基类成员需要使用初始化列表对其进行初始化
{
    int grade,score;
public:
    Student(string n="",int a=0,char g='M',int y=0,int m=0,int d=0,int gr=1,int s=0):Person(n,a,g,y,m,d)
    {
        this->grade=gr;
        score = s;
        cout << "Student Class Begin!"<<endl;
    }
    void show()
    {
        Person::show();
        cout << grade << "\t" <<score <<endl;
    }
};

int main()
{
    /*
    Date d1(2021,12,17);
    d1.show();
    Date d2;
    d2 = d1;//等号赋值的调用
    d2.show();

    //对象指针的几种访问方法
    Date *p;
    p=&d1;
    d1.show();
    p->show();
    (*p).show();

    //对象数组的引用
    Date q[3]={Date(1,1,1),Date(2,2,2),Date()};
    q[2].show();

    //对象的引用
    Date &w=d1;
    w.show();

    Date *qq=new Date(1999,9,8);
    qq->show();
    delete qq;*/

    //const Person p;//常对象，不能对其进行修改，不能对其调用“普通的成员函数”，只能调用常成员函数

    /*Person p1("Simon",12,'M',1999,2,16);
    p1.show();*/

    Student s("Simon",12,'M',2010,1,1,5,98);    
    s.show();

    return 0;
}