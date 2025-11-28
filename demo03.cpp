// 引用 给变量起别名
// 数据类型 &别名 = 原名

// 引用必须初始化
// 引用在初始化后，不可以改变

#include<iostream>
using namespace std;


//1. 值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

}

//2. 地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main() 
{
	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	cout << "========================" << endl;

	int x = 11;
	int y = 12;
	//int& z;  错误，引用必须初始化
	int& z = x;  //  一旦初始化后，就不可以更改
	z = y;       //  这是赋值操作，不是更改引用

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	cout << "========================" << endl;


	int o = 100;
	int p = 200;
	cout << "调用值传递-mySwap01()" << endl;
	mySwap01(o, p);
	cout << "o: " << o << "\tp:" << p << endl;

	cout << "调用地址传递-mySwap02()" << endl;
	mySwap02(&o, &p);
	cout << "o: " << o << "\tp:" << p << endl;

	
	cout << "调用引用传递-mySwap03()" << endl;
	mySwap02(&o, &p);
	cout << "o: " << o << "\tp:" << p << endl;










	system("pause");
	return 0;

}