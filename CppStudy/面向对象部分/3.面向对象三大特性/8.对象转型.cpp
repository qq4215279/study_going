//#include <iostream>
//using namespace std;
//
//// 对象转型
////		多态的前提：父类的引用/指针指向子类对象
////		对象转型成为父类的引用/指针之后，将只能够访问父类中存在的成员，不能访问在子类中定义的成员
//
//// virtual:
////		修饰函数，表示是一个虚函数
////		虚函数可以在子类中进行重新实现。将子类中重新实现从父类继承到的虚函数的过程，称为“重写”
////		父类的引用/指针，来调用父类中的函数的时候，如果子类已经完成了重写，最终的实现是子类的重写实现。
//
//class Animal {
//public:
//	// 虚函数的定义
//	virtual void bark() {
//		cout << "Animal Bark" << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	int age;
//	// 虚函数的重写
//	void bark() override {
//		cout << "Dog Bark" << endl;
//	}
//};
//
//int main() {
//	
//	// 父类的引用指向子类的对象
//	Dog dog;
//	Animal& animal = dog;
//
//	animal.bark();
//
//	// 父类的指针指向子类的对象
//	Dog* xiaobai = new Dog();
//	Animal* xiaohei = xiaobai;
//
//	return 0;
//}