//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
///*
//	merge算法 容器元素合并，并存储到另一容器中
//	注意:两个容器必须是有序的
//	@param beg1 容器1开始迭代器
//	@param end1 容器1结束迭代器
//	@param beg2 容器2开始迭代器
//	@param end2 容器2结束迭代器
//	@param dest  目标容器开始迭代器
//	merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
//*/
//
//void print(int i) {
//	cout << i << ", ";
//}
//
//
//int main() {
//
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 0, 2, 4, 6, 8, 10, 12 };
//
//	vector<int> v1(arr1, arr1 + (sizeof(arr1) / sizeof(int)));
//	vector<int> v2(arr2, arr2 + (sizeof(arr2) / sizeof(int)));
//
//	for_each(v1.begin(), v1.end(), print);
//	cout << endl;
//
//	for_each(v2.begin(), v2.end(), print);
//	cout << endl;
//
//	// 合并两个容器，到一个新的容器中
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), print);
//	cout << endl;
//
//	return EXIT_SUCCESS;
//}