#include<iostream>
using namespace std;

// 栈区：
// 由编译器自动分配释放，存放函数的参数值，局部变量等
// 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放


// 堆区：
// 由程序员分配释放，若程序员不释放，程序结束由操作系统释放
// 在C++ 中主要利用new在堆区开辟内存



// new操作符
// 语法：  new 数据类型
// 利用new创建的数据，会返回该数据对应的类型的指针


int* func1() 
{
	int a = 10;
	return &a;
}

int* func2()
{
	int* a = new int(10);
	return a;
}


int main() {

	int* p1 = func1();
	cout << *p1 << endl;
	cout << *p1 << endl;

	cout << "============================" << endl;


	int* p2 = func2();
	cout << *p2 << endl;
	cout << *p2 << endl;

	// 利用delete释放堆区数据
	delete p2;
	//cout << *p2 << endl;

	/*
	1. 堆区数据由程序员管理开辟和释放
	2. 堆区数据利用new关键字进行开辟内存
	*/


	cout << "=================================" << endl;

	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 10000;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// 释放数组 delete 后加[]
	delete[] arr;





	system("pause");
	return 0;
}