//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
///*
//	count算法 统计元素出现次数
//	如果比较的是自定义的类型（类、结构体），此时需要配合==运算符重载
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param  value回调函数或者谓词(返回bool类型的函数对象)
//	@return int返回元素个数
//	count(iterator beg, iterator end, value);
//*/
//
///*
//count_if算法 统计元素出现次数
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param  callback 回调函数或者谓词(返回bool类型的函数对象)
//	@return int返回元素个数
//	count_if(iterator beg, iterator end, _callback);
//*/
//
//struct JishuPredicate {
//	bool operator()(int n) {
//		return n % 2 == 1;
//	}
//};
//
//int main() {
//	int arr[] = { 1, 2, 3, 3, 3, 4, 4, 5, 3, 3, 3, 6, 7, 7, 7, 8, 1, 1, 2 };
//	vector<int> v(arr, arr + (sizeof(arr) / sizeof(int)));
//
//	// 查找7出现了多少次
//	cout << count(v.begin(), v.end(), 7) << endl;
//
//	// 查找有多少个奇数
//	cout << count_if(v.begin(), v.end(), JishuPredicate()) << endl;
//
//	return EXIT_SUCCESS;
//}