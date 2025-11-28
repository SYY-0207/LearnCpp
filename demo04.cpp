#include<iostream>
#pragma	warning(disable:4996)
using namespace std;


class BadString {
	char* data;
public:
	BadString(const char* s) {
		data = new char[strlen(s) + 1];
		strcpy(data, s);
	}

	~BadString()
	{
		delete[] data;
	}
};


int main()
{
	BadString a("hello");
	//BadString b = a;   // 浅拷贝，data指针一样
	// 析构a和b时都delete[] 同一个指针 -> 双重释放 Undefined Behavior
	// 拷贝构造函数的根本原因：让程序员有机会自定义“对象拷贝时到底应该怎么做”，make sure 资源管理的正确性

}