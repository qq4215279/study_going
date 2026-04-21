//#include <iostream>
//using namespace std;
//
//// 将全局函数做友元
//class Home {
//	// 将一个全局函数作为友元函数
//	friend void gotoBedRoom(Home* home);
//public:
//	string livingRoom = "客厅";
//private:
//	string bedRoom = "卧室";
//};
//
//void gotoBedRoom(Home* home) {
//	// 可以访问public部分
//	cout << home->livingRoom << endl;
//	// 也可以访问private部分
//	cout << home->bedRoom << endl;
//}
//
//int main() {
//
//	// 创建对象
//	Home home;
//	gotoBedRoom(&home);
//
//
//	return 0;
//}