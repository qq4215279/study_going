//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
///*
//	adjacent_find算法 查找相邻重复元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@return 返回相邻元素的第一个位置的迭代器
//
//	adjacent_find(iterator beg, iterator end);
//*/
///*
//	adjacent_find算法 查找相邻重复元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param  _callback 回调函数或者谓词(返回bool类型的函数对象)
//	@return 返回相邻元素的第一个位置的迭代器
//
//	adjacent_find(iterator beg, iterator end, _callback);
//*/
//
//
//void test01() {
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(5);
//	v.push_back(6);
//	v.push_back(1);
//
//	auto it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) {
//		cout << "没有找到" << endl;
//	}
//	else {
//		cout << "找到了：" << *it << endl;
//	}
//
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
//};
//
//struct PersonEqualPredicate {
//	bool operator()(const Person& p1, const Person& p2) {
//		return p1.name == p2.name && p1.age == p2.age;
//	}
//};
//
//
//void test02() {
//	vector<Person> v;
//	v.push_back(Person("xiaobai", 11));
//	v.push_back(Person("xiaohong", 12));
//	v.push_back(Person("xiaocheng", 13));
//	v.push_back(Person("xiaohong", 12));
//	v.push_back(Person("xiaohuang", 10));
//	v.push_back(Person("xiaohuang", 10));
//	v.push_back(Person("xiaolv", 9));
//	v.push_back(Person("xiaoqing", 12));
//	v.push_back(Person("xiaolan", 11));
//	v.push_back(Person("xiaoqing", 12));
//	v.push_back(Person("xiaozi", 10));
//
//
//	auto it = adjacent_find(v.begin(), v.end(), PersonEqualPredicate());
//	if (it == v.end()) {
//		cout << "没有找到" << endl;
//	}
//	else {
//		cout << "找到了！name = " << it->name << ", age = " << it->age << endl;
//	}
//}
//
//int main() {
//
//	test02();
//
//	return EXIT_SUCCESS;
//}