//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int>* getVector() {
//	vector<int>* v = new vector<int>();
//	for (int i = 0; i < 10; i++) {
//		v->push_back(i);
//	}
//	return v;
//}
//
//
///*
//	遍历算法 遍历容器元素
//	@param beg 开始迭代器
//	@param end 结束迭代器
//	@param _callback  函数回调或者函数对象
//	@return 函数对象
//*/
//// for_each(iterator beg, iterator end, _callback);
//
//
//
//class MyPrint {
//public:
//	void operator()(int i) {
//		cout << i << ", ";
//	}
//};
//
//void print(int i) {
//	cout << i << ", ";
//}
//
//void test01() {
//	// 获取到需要遍历的数据容器
//	vector<int>* v = getVector();
//
//	// 使用for_each算法进行遍历，使用到的是函数对象（仿函数）
//	// for_each(v->begin(), v->end(), MyPrint());
//
//	// 使用for_each算法进行遍历，使用到的是普通函数引用
//	for_each(v->begin(), v->end(), print);
//}
//
//int main() {
//
//	test01();
//
//	return EXIT_SUCCESS;
//}