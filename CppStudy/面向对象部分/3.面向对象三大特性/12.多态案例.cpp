//#include <iostream>
//using namespace std;
//
//// 顺丰快递可以发送空运包裹，也可以发送陆运包裹
//// EMS快递可以发送空运包裹
//// 圆通快递可以发送陆运包裹
//// 
//// 现在需要发送快递，设计两个函数，一个用来发送陆运，一个用来发送空运
//
//// 接口类的设计：空运的能力
//class AirTransportation {
//public:
//	virtual void sendPackageOnAir() = 0;
//};
//
//// 接口类的设计：陆运能力
//class LandTransportation {
//public:
//	virtual void sendPackageOnLand() = 0;
//};
//
//// 顺丰快递可以发送空运包裹，也可以发送陆运包裹，说明它同时兼备这两种能力
//class SF : public AirTransportation, public LandTransportation {
//public:
//	void sendPackageOnAir() override {
//		cout << "SF快递发送空运包裹" << endl;
//	}
//	void sendPackageOnLand() override {
//		cout << "SF快递发送陆运包裹" << endl;
//	}
//};
//
//class EMS : public AirTransportation {
//public:
//	void sendPackageOnAir() override {
//		cout << "EMS快递发送空运包裹" << endl;
//	}
//};
//
//class YT : public LandTransportation {
//public:
//	void sendPackageOnLand() override {
//		cout << "YT快递发送陆运包裹" << endl;
//	}
//};
//
//
//void sendLand(LandTransportation& expreeCompany) {
//	expreeCompany.sendPackageOnLand();
//}
//
//void sendAir(AirTransportation& expressCompany) {
//	expressCompany.sendPackageOnAir();
//}
//
//int main() {
//
//	SF sf;
//	EMS ems;
//	YT yt;
//
//	sendLand(yt);
//
//	sendAir(ems);
//
//
//	return 0;
//}