//#include <iostream>
//using namespace std;
//
//// 构造函数：
////		C++中的构造函数可以分为哪些类型？
////			- 按照参数：有参构造、无参构造
////			- 按照类型：普通构造、拷贝构造
//
//// 拷贝构造：
////		根据一个对象，拷贝出另外一个对象。新的对象与原来的对象地址不同，但是属性值是相同的。
////		而这个属性的拷贝操作，是在拷贝构造函数中完成的。
////		系统会自动的提供拷贝构造函数的！
//
//class Person {
//public:
//	string name;
//	int age;
//
//	Person() {}
//	Person(string name, int age) : name(name), age(age) {}
//
//	Person(const Person& p) {
//		cout << "拷贝构造函数调用了" << endl;
//		name = p.name;
//		age = p.age + 1;
//	}
//};
//
//
//
//int main() {
//	// 创建对象
//	Person xiaoming("xiaoming", 19);
//	// 类似于 int x = 10; int y = x;
//	// 创建了一个新的对象xiaohei，xiaohei和xiaoming其实指向不同空间的，但是他们有着相同的属性值
//	// 这个过程，其实就是会自动的调用拷贝构造函数的
//	Person xiaohei = xiaoming;  // Person xiaohei = Person(xiaoming);
//
//	cout << xiaoming.age << endl;
//	cout << xiaohei.age << endl;
//
//
//	return 0;
//}