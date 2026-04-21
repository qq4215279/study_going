#include <iostream>

using namespace std;

int main2() {

	// 定义一个局部变量，在栈空间开辟内存
	// 
	// int a;
	// cout << a << endl;

	// 在堆空间中开辟空间
	// 堆空间需要程序员手动的进行开辟，同时也会进行初始化的赋值操作。
	int* p = new int();
	cout << *p << endl;

	return 0;
}