//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
///*
//	find_if算法 条件查找
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param  callback 回调函数或者谓词(返回bool类型的函数对象)
//	@return bool 查找返回true 否则false
//	find_if(iterator beg, iterator end, _callback);
//*/
//
//struct JiShuPredicate {
//	bool operator()(int n) {
//		return n % 2 == 1;
//	}
//};
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	// 需求：查询容器中的奇数
//	vector<int>::iterator it = find_if(v.begin(), v.end(), JiShuPredicate());
//
//	if (it == v.end()) {
//		cout << "没有找到符合条件的元素" << endl;
//	}
//	else {
//		cout << "找到了！" << *it << endl;
//	}
//}
//
//
//class Student {
//public:
//	string name;
//	int score;
//
//	Student() = default;
//	Student(string n, int s): name(n), score(s) {}
//};
//
//struct LessThan60 {
//	bool operator()(Student s) {
//		return s.score < 60;
//	}
//};
//
//void test02() {
//	vector<Student> v;
//	v.push_back(Student("xiaoming", 99));
//	v.push_back(Student("xiaohong", 89));
//	v.push_back(Student("xiaolan", 79));
//	v.push_back(Student("xiaolv", 59));
//	v.push_back(Student("xiaoqing", 58));
//
//	// 需求：找到容器中第一个不及格的学生
//	auto it = find_if(v.begin(), v.end(), LessThan60());
//	if (it == v.end()) {
//		cout << "没有找到" << endl;
//	}
//	else {
//		cout << "找到这个学生了：" << (*it).name << ", " << (*it).score << endl;
//	}
//}
//
//
//int main() {
//	// test01();
//	test02();
//
//	return EXIT_SUCCESS;
//}