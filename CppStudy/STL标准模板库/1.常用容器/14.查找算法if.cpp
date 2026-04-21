//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
///*
//	find算法 查找元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param value 查找的元素
//	@return 返回查找元素的迭代器
//
//	find(iterator beg, iterator end, value)
//*/
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	
//	// 从这个容器中，查找5
//	vector<int>::iterator it = find(v.begin(), v.end(), 15);
//	if (it == v.end()) {
//		cout << "没有找到指定的元素" << endl;
//	}
//	else {
//		cout << "找到了指定的元素: " << *it << endl;
//	}
//}
//
//
//class Person {
//public:
//	string name;
//	int age;
//
//	Person() = default;
//	Person(string n, int a) : name(n), age(a) {}
//
//	bool operator==(const Person& p) {
//		return name == p.name && age == p.age;
//	}
//};
//
//void test02() {
//	vector<Person> v;
//	v.push_back(Person("xiaobai", 11));
//	v.push_back(Person("xiaohong", 12));
//	v.push_back(Person("xiaocheng", 13));
//	v.push_back(Person("xiaohuang", 10));
//	v.push_back(Person("xiaolv", 9));
//	v.push_back(Person("xiaoqing", 12));
//	v.push_back(Person("xiaolan", 11));
//	v.push_back(Person("xiaozi", 10));
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), Person("xiaohuang", 11));
//	if (it == v.end()) {
//		cout << "没有找到这个人" << endl;
//	}
//	else {
//		cout << "找到这个人了" << endl;
//	}
//}
//
//int main() {
//
//	// test01();
//	test02();
//
//	return EXIT_SUCCESS;
//}