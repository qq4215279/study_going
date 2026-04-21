//#include <iostream>
//
//using namespace std;
//
//class A {};
//
//class MyNumber {
//public:
//	// 在类中定义的静态成员，必须在类内定义、类外进行初始化赋值
//	static int a;
//	// 如果是静态常量，且数据类型是整型（int, short, long, long long, char, bool），允许在定义的时候就初始化赋值
//	const static double PI;
//
//	static void show() {
//		cout << "MyNumber类中的静态函数调用了" << endl;
//	}
//};
//// 在类外，对静态成员，进行初始化的赋值操作
//int MyNumber::a = 100;
//const double MyNumber::PI = 3.14;
//
//int main() {
//
//	// 如何访问静态成员
//	// 1. 可以使用对象来访问，但是切记不同的对象，访问到的其实是同一块空间。
//	// 2. 可以使用类来访问。
//
//	// 但是，更加推荐直接使用类来访问。
//
//	MyNumber number1;
//	MyNumber number2;
//
//	cout << number1.a << endl;
//	cout << number2.a << endl;
//
//	number1.a = 200;
//
//	cout << number1.a << endl;
//	cout << number2.a << endl;
//
//	cout << &number1.a << endl;
//	cout << &number2.a << endl;
//
//	number1.show();
//
//	// 使用类访问静态成员
//	MyNumber::a = 10;
//	cout << MyNumber::a << endl;
//	cout << number1.a << endl;
//	cout << number2.a << endl;
//
//	MyNumber::show();
//
//
//
//	return 0;
//}