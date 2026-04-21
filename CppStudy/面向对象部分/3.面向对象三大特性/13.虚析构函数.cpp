//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual ~Animal() {
//		cout << "父类的析构函数执行了" << endl;
//	}
//};
//
//class Person : public Animal {
//public:
//	int* n;
//	Person() {
//		n = new int(10);
//	}
//
//	~Person() override {
//		cout << "子类的析构函数执行了" << endl;
//		if (n != nullptr) {
//			delete n;
//			n = nullptr;
//		}
//	}
//};
//
//
//int main() {
//
//	Animal* animal = new Person();
//	delete animal;
//	// 如果没有虚析构函数的话，这里通过animal来销毁空间，销毁的开辟出来的堆上的Person对象的空间。
//	// 但是，由于没有执行子类中的析构函数，导致子类中的成员n所对应的堆空间没有释放，导致内存泄漏。
//	// 解决方案：将父类的析构函数作为虚函数，子类的析构函数重写父类的析构函数。
//
//	return 0;
//}