//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// 谓语Predicate：
////		如果一个函数对象（仿函数）中，重载的()的返回值类型是bool类型，这样的函数对象（仿函数）其实就是谓语Predicate。
////      
//
//class Student {
//private:
//	string _name;
//	int _age;
//
//public:
//	Student() {}
//	Student(string name, int age): _name(name), _age(age) {}
//
//	int age() {
//		return _age;
//	}
//
//	void desc() {
//		cout << "name: " << _name << ", age = " << _age << endl;
//	}
//};
//
//// 一元谓语
//class Yonger {
//public:
//	bool operator()(Student& s) const {
//		return s.age() < 18;
//	}
//};
//
//class MyComparator {
//public:
//	bool operator()(Student& s1, Student& s2) const {
//		return s1.age() < s2.age();
//	}
//};
//
//void test01() {
//	vector<Student> v;
//	v.push_back(Student("xiaoming", 19));
//	v.push_back(Student("xiaohong", 18));
//	v.push_back(Student("xiaohuang", 17));
//	v.push_back(Student("xiaocheng", 19));
//	v.push_back(Student("xiaolv", 21));
//	v.push_back(Student("xiaoqing", 20));
//	v.push_back(Student("xiaolan", 17));
//	v.push_back(Student("xiaozi", 18));
//	v.push_back(Student("xiaobai", 20));
//
//	// 需求：从容器中找到第一个未成年的学生
//	// find_if(start, end, predicate)：从给定的范围中，查询满足条件的元素。如果找到了，返回这个元素的迭代器；如果没有找到，就返回end
//	vector<Student>::iterator it = find_if(v.begin(), v.end(), Yonger());
//
//	if (it == v.end()) {
//		cout << "没有找到元素" << endl;
//	}
//	else {
//		(*it).desc();
//	}
//
//	// 需求：将容器中的元素进行排序（按照年龄，进行升序排序）
//	// sort(start, end, predicate)：使用指定的大小比较规则，对指定范围的元素进行排序
//	sort(v.begin(), v.end(), MyComparator());
//
//
//	for (Student& s : v) {
//		s.desc();
//	}
//}
//
//
//int main() {
//
//	test01();
//
//	return EXIT_SUCCESS;
//}