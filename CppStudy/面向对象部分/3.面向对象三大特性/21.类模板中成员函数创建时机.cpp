//#include <iostream>
//using namespace std;
//
//// 类模板中，成员函数的创建时机
//class Dog {
//public:
//	void bark() {
//		cout << "Dog Bark" << endl;
//	}
//};
//
//class Cat {
//public:
//	void sleep() {
//		cout << "Cat Sleep" << endl;
//	}
//};
//
//// 设计模板类
//template<typename T>
//class Person {
//public:
//	T pet;
//
//	void makeBark() {
//		pet.bark();
//	}
//
//	void makeSleep() {
//		pet.sleep();
//	}
//};
//
//
//int main() {
//	// 在类设计完成之后，直接编译程序，发现是没有问题的。
//
//	// 调用makeBark函数的时候，可以正常调用，没有问题。
//	Person<Dog> xiaobai;
//	xiaobai.makeBark();
//
//	// 调用makeSleep函数的时候，出问题了，不能调用了。
//	// pet对象调不到sleep函数。
//	xiaobai.makeSleep();
//
//	// 原因：类模板中的成员函数，是在调用函数的时候才会创建的！
//	// 因为在编译的时候，只知道有一个属性是pet，但是具体是什么类型，不知道！
//	// 在调用makeBark函数的时候，创建这个函数，而我们设置的类型是Dog类型，没有问题！
//	// 在调用makeSleep函数的时候，创建这个函数，而我们设置的类型是Dog类型，没有sleep函数，因此就出问题了!
//
//	return 0;
//}