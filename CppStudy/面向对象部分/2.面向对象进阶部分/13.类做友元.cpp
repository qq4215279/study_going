//#include <iostream>
//using namespace std;
//
//// 将类做成友元，友元类中的所有的成员函数中，都可以访问你的私有部分
//class Friend;
//
//class Home {
//	// 将类做成友元
//	friend class Friend;
//public:
//	string livingRoom = "客厅";
//private:
//	string bedRoom = "卧室";
//};
//
//class Friend {
//public:
//	Home* home;
//
//	void visit1() {
//		cout << home->livingRoom << endl;
//		cout << home->bedRoom << endl;
//	}
//
//	void visit2() {
//		cout << home->livingRoom << endl;
//		cout << home->bedRoom << endl;
//	}
//};
//
//int main() {
//
//	Home* home = new Home();
//
//	// 创建好朋友
//	Friend* xiaobai = new Friend();
//	xiaobai->home = home;
//
//	xiaobai->visit1();
//
//	xiaobai->visit2();
//
//	return 0;
//}