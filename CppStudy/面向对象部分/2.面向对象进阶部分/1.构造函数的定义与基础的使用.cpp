//#include <iostream>
//
//using namespace std;
//
//// 构造函数的定义：
////		1、构造函数没有返回值类型，不能写，连void都不能写
////		2、构造函数的名字必须与类名相同
////		3、构造函数可以通过不同的参数，来实现重载(Overload)
//
//// explicit:
////		是用来修饰构造函数的，写在构造函数之前。表示无法通过隐式调用来访问这个构造函数。
//
//
//class Person {
//public:
//	Person() {
//		cout << "Person类的无参构造函数执行了" << endl;
//	}
//
//	explicit Person(int age) {
//		cout << "Person类的有参构造函数执行了" << endl;
//	}
//
//	Person(int age, int score) {
//		cout << "Person(int, int)构造函数执行了" << endl;
//	}
//};
//
//int main() {
//	// 构造函数的调用：创建对象的时候调用的。
//	// 1. 显式调用
//	// Person xiaoming = Person();
//	// Person xiaoming = Person(10);
//	// Person xiaoming = Person(10, 20);
//	//
//	// Person xiaoming;		// 如果使用缩写的方式，来调用无参的构造函数，创建对象。需要注意，不能写小括号。因为写小括号了，系统会认为你在定义函数
//	// Person xiaoming(10);
//	// Person xiaoming(10, 20);
//	
//	// 2. 隐式调用，不需要我们自己写Person()，直接将所有的参数写道一对大括号中，此时系统会根据大括号中的实参的数量和类型，找到与之匹配的构造函数调用
//	// Person xiaoming = {};
//	// Person xiaoming = {10};		// 在这里，大括号中如果只有一个参数的话，大括号是可以省略不写的
//	// Person xiaoming = {10, 20};
//
//	// 如果我们使用new的方式创建对象，如果调用的是无参的构造函数，小括号是可以省略不写的
//	// 使用new的方式，在堆上创建对象，这个过程称为实例化
//	// Person* xiaoming = new Person;
//
//	return 0;
//}