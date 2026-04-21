//#include <iostream>
//using namespace std;
//
//// 菱形继承，钻石继承
////		两个类继承自同一个父类，而又有了相同的子类。这样的继承结构就是菱形继承，又叫做钻石继承。
////
//// 虚继承：
////		为了解决菱形继承的时候命名冲突的问题，使得派生类中只保留一份相同的间接父类中的成员。
//
//class Animal {
//public:
//	int age;
//};
//
//class Horse: public virtual Animal {
//public:
//	int a;
//};
//class Donkey: public virtual Animal {
//public:
//	int b;
//};
//
//class Mule: public Horse, public Donkey {};
//
//int main() {
//
//	// 创建对象
//	Mule mule;
//	cout << mule.a << endl;
//	cout << mule.b << endl;
//	// cout << mule.Horse::age << endl;
//	// cout << mule.Donkey::age << endl;
//	cout << mule.age << endl;
//
//	return 0;
//}