//#include <iostream>
//using namespace std;
//
//// 成员函数做友元
//
//class Home;
//
//class GoodFriend {
//public:
//	Home* home;
//	void visitBedRoom();
//};
//
//class Home {
//	// 将GoodFriend中的成员函数作为友元
//	friend void GoodFriend::visitBedRoom();
//
//public:
//	string livingRoom = "客厅";
//private:
//	string bedRoom = "卧室";
//};
//
//void GoodFriend::visitBedRoom() {
//	cout << home->livingRoom << endl;
//	cout << home->bedRoom << endl;
//}
//
//int main() {
//
//	Home* home = new Home();
//
//	GoodFriend* goodFriend = new GoodFriend();
//	goodFriend->home = home;
//
//	goodFriend->visitBedRoom();
//
//	return 0;
//}