//#include <iostream>
//
//using namespace std;
//
//// 析构函数：
////		是对象生命周期的终点，在对象空间被销毁之前调用。
////		在析构函数中，一般进行资源的释放，堆内存的销毁。
//
//class Person {
//public:
//	int a;
//	int* p;
//
//	// 析构函数：使用~开头，并且不能有参数
//	~Person() {
//		cout << "Person类的析构函数调用了" << endl;
//		// 在析构函数中，将类内引用的其他堆空间都释放掉，防止内存泄露
//		if (p != nullptr) {
//			delete p;
//			p = nullptr;
//		}
//	}
//};
//
//int main() {
//	// 在堆上开辟空间
//	Person* xiaoming = new Person();
//	xiaoming->p = new int(10);
//	int* tmp = xiaoming->p;
//
//	// 释放堆空间
//	delete xiaoming;
//
//	cout << *tmp << endl;
//
//	system("pause");
//	return 0;
//}