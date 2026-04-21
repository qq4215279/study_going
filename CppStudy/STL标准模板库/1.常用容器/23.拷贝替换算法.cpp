//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Print
//{
//	void operator()(int i) {
//		cout << i << ", ";
//	}
//};
//
///*
//	copy算法 将容器内指定范围的元素拷贝到另一容器中
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param dest 目标起始迭代器
//
//	copy(iterator beg, iterator end, iterator dest)
//*/
//void test01() {
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(12);
//	v1.push_back(15);
//	v1.push_back(9);
//	v1.push_back(7);
//
//	vector<int> v2;
//	v2.resize(v1.size());
//
//	// 拷贝
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), Print());
//}
//
///*
//	replace算法 将容器内指定范围的旧元素修改为新元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param oldvalue 旧元素
//	@param oldvalue 新元素
//
//	replace(iterator beg, iterator end, oldvalue, newvalue)
//*/
//void test02() {
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(1);
//
//	// 需求：将容器中的1都替换成100
//	replace(v.begin(), v.end(), 1, 100);
//	for_each(v.begin(), v.end(), Print());
//}
//
///*
//	replace_if算法 将容器内指定范围满足条件的元素替换为新元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param callback函数回调或者谓词(返回Bool类型的函数对象)
//	@param oldvalue 新元素
//
//	replace_if(iterator beg, iterator end, _callback, newvalue)
//*/
//struct Filter {
//	bool operator()(int i) {
//		return i % 2 == 1;
//	}
//};
//
//void test03() {
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//
//	// 需求：将容器中的所有的奇数，替换成100
//	replace_if(v.begin(), v.end(), Filter(), 100);
//	for_each(v.begin(), v.end(), Print());
//}
//
///*
//	swap算法 互换两个容器的元素
//	@param c1容器1
//	@param c2容器2
//
//	swap(container c1, container c2)
//*/
//void test04() {
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0, 12, 14, 16 };
//	vector<int> v1(arr1, arr1 + (sizeof(arr1) / sizeof(int)));
//	vector<int> v2(arr2, arr2 + (sizeof(arr2) / sizeof(int)));
//
//	swap(v1, v2);
//
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), Print());
//}
//
//
//int main() {
//
//	// test01();
//	// test02();
//	// test03();
//	test04();
//	
//	return EXIT_SUCCESS;
//}