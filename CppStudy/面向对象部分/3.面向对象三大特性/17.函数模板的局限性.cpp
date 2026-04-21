//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int age;
//	Person(): age(0) {}
//	Person(int age): age(age) {}
//};
//
//#if 0
//bool operator>(const Person& p1, const Person& p2) {
//	return p1.age > p2.age;
//}
//bool operator<(const Person& p1, const Person& p2) {
//	return p1.age < p2.age;
//}
//#endif
//
//
//// 定义一个函数模板，对两个相同数据类型的数据进行比较
//template<typename T>
//int compare(T& n1, T& n2) {
//	if (n1 > n2) {
//		return 1;
//	}
//	else if (n1 < n2) {
//		return -1;
//	}
//	return 0;
//}
//
//// 函数模板的重载，为了解决特定类型的对象的问题
//template<>
//int compare<Person>(Person& p1, Person& p2) {
//	if (p1.age > p2.age) {
//		return 1;
//	}
//	else if (p1.age < p2.age) {
//		return -1;
//	}
//	return 0;
//}
//
//
//int main() {
//
//	// 创建两个Person对象
//	Person xiaobai(19);
//	Person xiaohei(20);
//
//	cout << compare(xiaobai, xiaohei) << endl;
//
//	return 0;
//}