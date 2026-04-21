//#include <iostream>
//
//using namespace std;
//
//// 使用关键字class来描述一个类
//// 类是若干个具有相同的特征和功能的对象的集合，在类中写所有的对象共有的特征和行为，其中特征使用变量来定义，在这里称为“属性”；行为使用函数来表示。
//
//// 访问权限：
//// 用来修饰属性、行为可以在什么位置访问的。
//// private: 私有权限、只能够在当前的类中访问，其他位置都不可以访问。
//// protected: 保护权限、类外不能访问，可以在当前类和子类中访问。
//// public: 公开权限、可以在任意的位置访问。
//
//// 注意事项：
////		类中定义的属性和行为，默认都是私有权限（private）的。
////      如果我们需要在类外进行访问，需要修改其权限为public
//
//class Person {
//public:
//	string name;
//	int age;
//	string gender;
//	int score;
//
//	void eat() {
//		cout << "人类都会吃饭" << endl;
//	}
//
//	void sleep() {
//		cout << "人类都会睡觉" << endl;
//	}
//};
//
//int main() {
//	// 创建对象：从一个类中，找到一个个体。
//	Person xiaoming = Person();
//	Person* xiaoli = new Person();
//
//	Person xiaobai;		// Person xiaobai = Person();
//	
//	// 创建对象的时候，其实是需要在内存中开辟空间的（使用new，就在堆上开辟空间，如果没有使用new，就栈上开辟空间）
//	// 如果类中是有属性的，所有的属性占用的空间大小的和。
//	// 如果类中是没有属性的，对象占用的空间大小也不是0，而是1。
//	cout << sizeof(xiaoming) << endl;
//	
//
//	// 成员访问：访问类中的成员（属性、函数）
//	// 需要使用对象来访问
//	xiaoming.name = "xiaoming";
//	xiaoming.age = 19;
//	xiaoming.gender = "male";
//	xiaoming.score = 100;
//	cout << xiaoming.name << endl;
//	cout << xiaoming.age << endl;
//	cout << xiaoming.gender << endl;
//	cout << xiaoming.score << endl;
//	xiaoming.eat();
//	xiaoming.sleep();
//
//	// 如果是一个对象指针的话，可以先通过*找到堆空间，再通过.访问属性
//	(*xiaoli).name = "xiaoli";
//	(*xiaoli).age = 18;
//	(*xiaoli).gender = "male";
//	(*xiaoli).score = 100;
//	cout << (*xiaoli).name << endl;
//	
//	// 在C++中，直接将 *寻堆空间，再访问属性的写法，简化成 ->
//	cout << xiaoli->name << endl;
//	cout << xiaoli->age << endl;
//	cout << xiaoli->gender << endl;
//	cout << xiaoli->score << endl;
//	xiaoli->eat();
//	xiaoli->sleep();
//
//	return 0;
//}
