//#include <iostream>
//using namespace std;
//
//// 案例：
//
//class ExpressCompany {
//public:
//	virtual void sendPackage() {}
//};
//
//class SF: public ExpressCompany {
//public:
//	void sendPackage() override {
//		cout << "SF快递为您快速发送包裹" << endl;
//	}
//};
//
//class EMS: public ExpressCompany {
//public:
//	void sendPackage() override {
//		cout << "EMS快递为您发送包裹，哪里都能送到！" << endl;
//	}
//};
//
//class JDL: public ExpressCompany {
//public:
//	void sendPackage() override {
//		cout << "JDL为您发送包裹，最快当日可达" << endl;
//	}
//};
//
//class YT : public ExpressCompany {
//public:
//	void sendPackage() override {
//		cout << "YT快递为您发送包裹" << endl;
//	}
//};
//
//#if 0
//void send(string company) {
//	if (company == "SF") {
//		SF().sendPackage();
//	}
//	else if (company == "EMS") {
//		EMS().sendPackage();
//	}
//	else if (company == "JDL") {
//		JDL().sendPackage();
//	}
//	// 这里违背了程序设计的原则之一：开闭原则
//	// 开闭原则：对拓展开放、对修改关闭，当有新的功能增加的时候，可以直接拓展模块来实现，不能修改已有的代码
//}
//
//#else
//void send(ExpressCompany& company) {
//	company.sendPackage();
//}
//
//#endif
//
//
//int main() {
//	EMS ems;
//	SF sf;
//	JDL jdl;
//	YT yt;
//
//	send(yt);
//
//	return 0;
//}