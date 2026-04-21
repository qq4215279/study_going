//#include <iostream>
//using namespace std;
//
//// 纯虚函数：如果一个虚函数的实现部分被设置为了0，那么这样的函数就是纯虚函数。纯虚函数只有声明，没有实现。
//// 抽象类：如果一个类中包含了纯虚函数，这个类就是抽象类。抽象类不能创建对象。
//
//class TrafficTool {
//public:
//	// 纯虚函数
//	virtual void transport() = 0;
//};
//
//// 如果类继承自一个抽象类，此时这个类中必须重写实现父类中所有的纯虚函数。否则这个类也是一个抽象类，无法创建对象。
//class Bus : public TrafficTool {
//public:
//	void transport() override {
//		cout << "公交车运输乘客" << endl;
//	}
//};
//
//class Bike : public TrafficTool {
//public:
//	void transport() override {
//		cout << "自行车，两腿蹬" << endl;
//	}
//};
//
//
//int main() {
//
//	return 0;
//}