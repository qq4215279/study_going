//#include <iostream>
//using namespace std;
//
//// 在C++中，继承有三种方式：公共继承、保护继承和私有继承。其实这里这是一个访问权限的问题。
////		- 公共继承：继承到父类中的属性（函数），保留原有的访问权限。
////		- 保护继承：继承到父类中的属性（函数），超过protected权限部分，将降为protected权限。
////		- 私有继承：继承到父类中的属性（函数），访问权限都为private权限。
//// 在C++中，默认使用的是私有继承。
//
//class BaseClass {
//public:
//	int publicField;
//protected:
//	int protectedField;
//private:
//	int privateField;
//};
//
//class SubClass : public BaseClass { 
//
//};
//
//class SubA : public SubClass {
//	void test() {
//		cout << publicField << endl;
//		cout << protectedField << endl;
//	}
//};
//
//int main() {
//
//	SubClass c1;
//	cout << c1.publicField << endl;
//
//	return 0;
//}