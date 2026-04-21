//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
///*
//	transform算法 将指定容器区间元素搬运到另一容器中
//	注意 : transform 不会给目标容器分配内存，所以需要我们提前分配好内存
//	@param beg1 源容器开始迭代器
//	@param end1 源容器结束迭代器
//	@param beg2 目标容器开始迭代器
//	@param _cakkback 回调函数或者函数对象
//	@return 返回目标容器迭代器
//
//	transform(iterator beg1, iterator end1, iterator beg2, _callbakc);
//*/
//
//class NumberOperate {
//public:
//	int operator()(int i) {
//		return i + 100;
//	}
//};
//
//class SumOperate {
//public:
//	int operator()(int n1, int n2) {
//		return n1 + n2;
//	}
//};
//
//struct Print {
//	void operator()(int i) {
//		cout << i << ", ";
//	}
//};
//
//
//int cp(int e) {
//	return e + 100;
//}
//
//int sum(int n1, int n2) {
//	return n1 + n2;
//}
//
//
//int main() {
//
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//
//	vector<int> v2;
//	v2.resize(v1.size());
//
//
//	// 元素的拷贝
//	// transform(v1.begin(), v1.end(), v2.begin(), NumberOperate());
//	transform(v1.begin(), v1.end(), v2.begin(), cp);
//	for_each(v2.begin(), v2.end(), Print());
//	cout << endl;
//	
//	// 需求：将v1和v2中的元素相加，拷贝到v3中
//	vector<int> v3;
//	v3.resize(v1.size());
//
//	// transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), SumOperate());
//	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), sum);
//	for_each(v3.begin(), v3.end(), Print());
//
//	return EXIT_SUCCESS;
//}