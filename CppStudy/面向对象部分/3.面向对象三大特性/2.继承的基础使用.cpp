//#include <iostream>
//using namespace std;
//
//// 继承的特点:
////		1. 父类中所有的非静态成员，都可以继承给子类（排除构造函数和析构函数）
////		2. 一个类可以被多个类同时继承
////		3. 在C++中，一个类可以有多个父类（多继承）
////		4. 一个类在继承了父类的同时，也可以被他的子类继承
////
//// 私有的属性，也可以继承给子类，只不过在子类中由于访问权限的限制，导致没有办法访问。
//
//// public: 可以在任意的位置访问
//// protected: 可以在当前类和子类中访问
//// private: 只能够在当前类中访问
//
//class Animal {
//public:
//	int age;
//	void walk() {
//		cout << "Animal Walk" << endl;
//	}
//
//protected:
//	int s;
//private:
//	int p;
//};
//
//// 继承的语法:
//// class 子类类名: [继承方式] 父类类名
//class Dog: public Animal {
//public:
//	void test() {
//		cout << age << endl;
//		cout << s << endl;
//		// cout << p << endl;
//	}
//};
//
//class Cat: public Animal {};
//
//int main() {
//
//	// 创建Dog对象
//	// Dog dog = Dog();
//	// cout << dog.age << endl;
//	// dog.walk();
//
//	Animal animal;
//	cout << sizeof(animal) << endl;
//
//	Dog dog;
//	cout << sizeof(dog) << endl;
//	
//	return 0;
//}