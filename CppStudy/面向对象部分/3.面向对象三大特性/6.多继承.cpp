//#include <iostream>
//using namespace std;
//
//// 多继承：一个类可以有多个父类
//class SuperClass1 {
//public:
//	void display() {
//		cout << "SuperClass1 Display" << endl;
//	}
//};
//
//class SuperClass2 {
//public:
//	void display() {
//		cout << "SuperClass2 Display" << endl;
//	}
//};
//
//// 多继承的语法：
////		基本与普通的继承没有区别，将多个父类之间用逗号进行分隔，并且每一个父类都需要指定继承的方式
//// 二义性：
////		如果多个父类中存在相同名字的成员，子类在继承到之后，无法确定到底该访问哪一个？
//class SubClass: public SuperClass1, public SuperClass2 {
//
//};
//
//int main() {
//
//	// 创建子类对象
//	SubClass sc;
//
//	// 调用函数
//	// 因为有二义性的存在，导致之类无法直接调用这个函数（因为不明确到底需要调用什么函数）
//	// sc.display();
//
//	// 解决问题：需要手动指定类型
//	sc.SuperClass1::display();
//	sc.SuperClass2::display();
//
//	return 0;
//}