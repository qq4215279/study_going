//#include <iostream>
//using namespace std;
//
//// 父类和子类中出现了同名字的成员（函数、属性）
////		子类会将从父类继承到的成员隐藏起来，子类对象直接访问，访问的是子类中的成员。
////		如果想要访问父类中继承下来的成员，需要显式指定。
//
//class Animal {
//public:
//	int age = 0;
//
//	void showAge() {
//		cout << "父类中的showAge函数被调用了，age = " << age << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	int age;
//
//	void showAge() {
//		cout << "子类中的showAge函数被调用了，age = " << age << endl;
//	}
//};
//
//int main() {
//
//	// 创建一个子类对象
//	Dog dog;
//	dog.age = 10;
//	dog.showAge();
//
//	// 访问从父类继承到的成员（被隐藏起来的）
//	dog.Animal::showAge();
//
//
//	return 0;
//}