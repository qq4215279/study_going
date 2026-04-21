//#include <iostream>
//using namespace std;
//
//// const: 可以修饰类中的成员函数，表示这个函数是一个“常函数”
//// 
//// 常函数：
////		- 使用关键字const修饰
////		- 常函数中，不允许修改属性值
////		- 常函数中，不允许调用普通函数，只能调用其他的常函数
//// 
//// 常对象：
////		- 创建对象的时候，使用关键字const修饰的对象，就是常对象
////		- 常对象可以读取任意属性的值，但是不允许修改
////		- 常对象，只能调用常函数，不能调用普通函数
////
//// mutable：
////		- 用来修饰属性的，表示可变
////		- 被mutable修饰的属性，可以在常函数中修改，也可以由常对象修改
//
//class Person {
//public:
//	string name;
//	int age;
//	mutable int score;
//
//public:
//	Person(): name(""), age(0), score(0) {}
//	Person(string name, int age, int score): name(name), age(age), score(score) {}
//
//	void fixPerson(string newName, int newAge, int newScore) const {
//		// name = newName;
//		// age = newAge;
//		score = newScore;
//	}
//
//	void display() {
//		cout << "name = " << name << ", age = " << age << ", score = " << score << endl;
//	}
//};
//
//int main() {
//
//	// Person xiaobai("xiaobai", 18, 99);
//	// xiaobai.fixPerson("xiaohei", 20, 100);
//	// xiaobai.display();
//
//	// 定义一个常对象
//	const Person xiaobai("xiaobai", 19, 99);
//	// 试图修改常对象的属性
//	// xiaobai.name = "xiaohei";
//	// xiaobai.age = 10;
//	xiaobai.score = 100;
//	// cout << xiaobai.name << endl;
//
//	
//	// xiaobai.fixPerson("abc", 19, 99);
//
//
//	return 0;
//}