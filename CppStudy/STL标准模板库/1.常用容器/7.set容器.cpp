//#include <iostream>
//#include <set>
//using namespace std;
//
//void printSet(multiset<int>& s) {
//#if 0
//	// set的迭代器是一个只读的迭代器，只可以通过迭代器获取到元素的值，但是不能修改
//	for (auto it = s.begin(); it != s.end(); it++) {
//		cout << *it << ", ";
//	}
//	cout << endl;
//#else
//	for (int ele : s) {
//		cout << ele << ", ";
//	}
//	cout << endl;
//#endif
//
//}
//
//int main() {
//
//	// 构造函数
//	// set<int> s;
//	multiset<int> s;
//
//	// 插入元素
//	s.insert(123);
//	s.insert(111);
//	s.insert(100);
//	s.insert(111);
//	printSet(s);
//
//	// 删除元素
//	set<int>::iterator it = s.begin();
//	s.erase(it);
//	// s.erase()
//	// s.clear();
//	printSet(s);
//
//	// 查找：set容器中，没有下标的概念
//	set<int>::iterator target = s.find(100);		// 查找元素是否存在，如果存在，返回这个元素的迭代器；如果不存在，返回set.end()
//	cout << s.count(100) << endl;					// 查找元素的个数
//	set<int>::iterator res1 = s.lower_bound(111);	// 返回第一个元素<=指定元素的迭代器
//	set<int>::iterator res2 = s.upper_bound(111);	// 返回第一个元素>指定元素的迭代器
//
//	// 
//	cout << s.size() << endl;
//	cout << s.empty() << endl;
//
//	return EXIT_SUCCESS;
//}