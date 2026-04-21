//#include <iostream>
//
//using namespace std;
//
//// this：是一个用来指向当前对象的指针
//// 当前对象：谁调用这个函数，this就指向谁
//
//// 理论上来讲，在类的内部，访问当前类中的（非静态）成员的时候，应该都使用this->来访问。
//// 实际上，绝大多数的情况下，this->都是可以省略不写的。
////
//// this在什么情况下不能省略？
////		如果在一个函数内，出现了局部变量和属性同名字的情况，为了区分局部变量和属性，需要显式使用this->来访问属性。
//
//
//class Person {
//public:
//	int age;
//
//	Person() {
//		age = 0;
//	}
//
//	Person(int age) {
//		this->age = age;
//	}
//
//	void setAge(int age) {
//		// 如果在一个函数内，出现了局部变量和属性同名字的情况
//		// 直接使用名字来访问的，是局部变量
//		// 此时，如果需要访问属性age，那就必须使用this->来显式调用
//		this->age = age;
//	}
//
//	int getAge() {
//		return age;
//	}
//};
//
//int main() {
//
//	Person xiaoming(10);
//	cout << xiaoming.getAge() << endl;
//
//	Person xiaobai(20);
//	cout << xiaobai.getAge() << endl;
//
//
//	return 0;
//}