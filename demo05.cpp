#include<iostream>
using namespace std;

class Person
{
public:
	// 无参(默认)构造函数
	Person();

	// 有参构造函数
	Person(int a);

	// 拷贝构造函数
	Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数！" << endl;
	}

	~Person();

	int age;


};

Person::Person()
{
	cout << "无参构造函数" << endl;
}

Person::Person(int a)
{
	age = a;
	cout << "有参构造函数！" << endl;
}


Person::~Person()
{
	cout << "析构函数" << endl;
}

void test01()
{
	// 调用无参构造函数
	Person p;
	//Attention: 调用无参构造函数,如果加了编译器会认为这是一个函数声明
	//Person p2();
}


void test02()
{
	// 1. 括号法，common
	Person p1(10);

	// 2. 显示法
	Person p2 = Person(20);

	// Person(30) 单独写就是匿名对象  当前行结束后，马上析构

	Person p4 = 10;
	cout << "==" << endl;
	Person p5 = p4;


}



int main() 
{
	test02();

}