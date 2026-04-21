//#include <iostream>
//
//using namespace std;
//
//// 浅拷贝：在拷贝构造函数中，直接完成属性的值拷贝操作。（默认的拷贝构造函数，就是浅拷贝）
//// 深拷贝：在拷贝构造函数中，创建出来新的空间，是的属性中的指针指向的是一个新的空间。
//
//class Cat {
//public:
//	string name;
//	int age;
//};
//
//class Person {
//public:
//	int age;
//	Cat* pet;
//
//	Person() {
//		age = 0;
//		pet = new Cat();
//	}
//
//	// 拷贝构造函数
//	Person(const Person& p) {
//		// 默认的拷贝构造函数的实现，就是浅拷贝，直接完成值的拷贝操作
//		age = p.age;
//		// pet = p.pet;
//		pet = new Cat();
//		pet->name = p.pet->name;
//		pet->age = p.pet->age;
//	}
//
//	~Person() {
//		if (pet != nullptr) {
//			delete pet;
//			pet = nullptr;
//		}
//	}
//};
//
//
//int main() {
//
//	Person xiaobai;
//	Person xiaohei = xiaobai;
//
//	return 0;
//}