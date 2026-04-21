//#include <iostream>
//using namespace std;
//
//
//// 接口类：只是一个逻辑名称而已，其中定义了若干个约束。在接口类中只有函数的定义，没有实现。
//
//class Cooker {
//public:
//	virtual void buyFood() = 0;
//	virtual void cook() = 0;
//	virtual void eat() = 0;
//};
//
//class Maid {
//public:
//	virtual void cook() = 0;
//	virtual void wash() = 0;
//	virtual void clean() = 0;
//};
//
//class Person : public Cooker, public Maid {
//public:
//	void buyFood() override {
//		cout << "买菜" << endl;
//	}
//	void cook() override {
//		cout << "做饭" << endl;
//	}
//	void eat() override {
//		cout << "吃饭" << endl;
//	}
//	void wash() override {
//		cout << "洗衣服" << endl;
//	}
//	void clean() override {
//		cout << "扫地" << endl;
//	}
//};
//
//
//
//int main() {
//
//	return 0;
//}