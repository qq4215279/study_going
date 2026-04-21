//#include <iostream>
//using namespace std;
//
//// 属性的封装
////		WHY：因为有一些属性，不希望外界直接访问，特别是不希望直接去修改。
////		HOW：就这个属性私有化，并且提供指定的访问函数。
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	Person(): name(""), age(0) {}
//
//	int getAge() {
//		return age;
//	}
//
//	void setAge(int age) {
//		if (age >= 0 && age <= 150) {
//			this->age = age;
//		}
//	}
//};
//
//int main() {
//
//	// 创建对象
//	Person xiaobai;
//	// 属性赋值
//	xiaobai.setAge(100);
//	cout << xiaobai.getAge() << endl;
//
//
//	return 0;
//}