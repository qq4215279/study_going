//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
///*
//	reverse算法 反转指定范围的元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//
//	reverse(iterator beg, iterator end)
//*/
//
//struct Print
//{
//	void operator()(int i) {
//		cout << i << ", ";
//	}
//};
//
//int main() {
//	int arr[] = { 1, 11, 17, 21, 89, 10, 2, 128, 38 };
//	vector<int> v(arr, arr + (sizeof(arr) / sizeof(int)));
//
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Print());
//
//	return EXIT_SUCCESS;
//}