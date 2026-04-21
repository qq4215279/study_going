//#include <iostream>
//
//using namespace std;
//
//// 使用空指针，调用成员函数，但是需要保证这个函数中不能出现this进行空间访问
//
//class Person {
//public:
//	int age;
//
//	Person() : age(0) {}
//	Person(int age): age(age) {}
//
//	void func1() {
//		cout << "func1执行了" << endl;
//	}
//
//	void func2() {
//		if (this == nullptr) {
//			cout << "this是一个空指针" << endl;
//			return;
//		}
//		cout << this->age << endl;
//
//		cout << "func2执行了" << endl;
//	}
//};
//
//
//int main() {
//
//	Person* xiaoming = nullptr;
//
//	// 使用空指针进行成员访问
//	// cout << xiaoming->age << endl;
//	xiaoming->func1();
//	xiaoming->func2();
//
//
//	return 0;
//}