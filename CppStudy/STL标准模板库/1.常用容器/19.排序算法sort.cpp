//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
///*
//	sort算法 容器元素排序
//	@param beg 容器1开始迭代器
//	@param end 容器1结束迭代器
//	@param _callback 回调函数或者谓词(返回bool类型的函数对象)
//
//	sort(iterator beg, iterator end, _callback)
//*/
//
//struct Print {
//	void operator()(int i) {
//		cout << i << ", ";
//	}
//};
//
//
//void test01() {
//	int arr[] = { 1, 3, 5, 7, 9, 0, 8, 6, 4, 2 };
//	vector<int> v(arr, arr + (sizeof(arr) / sizeof(int)));
//
//	// 对元素进行排序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Print());
//
//	// 使用自己的规则进行排序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), Print());
//}
//
//
//class Student {
//public:
//	string name;
//	int score;
//	Student() = default;
//	Student(string n, int s) : name(n), score(s) {}
//};
//
//class StudentCompare {
//public:
//	bool operator()(const Student& s1, const Student& s2) {
//		return s1.score < s2.score;
//	}
//};
//
//void test02() {
//	vector<Student> v;
//	v.push_back(Student("xiaobai", 99));
//	v.push_back(Student("xiaohei", 98));
//	v.push_back(Student("xiaohong", 97));
//	v.push_back(Student("xiaolan", 99));
//	v.push_back(Student("xiaolv", 89));
//	v.push_back(Student("xiaozi", 88));
//	v.push_back(Student("xiaohui", 91));
//	v.push_back(Student("xiaoli", 90));
//
//	// 按照成绩升序排列
//	sort(v.begin(), v.end(), StudentCompare());
//
//	for (Student& s : v) {
//		cout << s.name << ", " << s.score << endl;
//	}
//}
//
//int main() {
//
//	// test01();
//	test02();
//	
//
//	return EXIT_SUCCESS;
//}