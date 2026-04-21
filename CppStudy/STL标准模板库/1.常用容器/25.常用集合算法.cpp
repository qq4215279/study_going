#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	set_intersection算法 求两个set集合的交集
	注意:两个集合必须是有序序列
	@param beg1 容器1开始迭代器
	@param end1 容器1结束迭代器
	@param beg2 容器2开始迭代器
	@param end2 容器2结束迭代器
	@param dest  目标容器开始迭代器
	@return 目标容器的最后一个元素的迭代器地址
	set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
*/

/*
	set_union算法 求两个set集合的并集
	注意:两个集合必须是有序序列
	@param beg1 容器1开始迭代器
	@param end1 容器1结束迭代器
	@param beg2 容器2开始迭代器
	@param end2 容器2结束迭代器
	@param dest  目标容器开始迭代器
	@return 目标容器的最后一个元素的迭代器地址
	set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
*/

/*
	set_difference算法 求两个set集合的差集
	注意:两个集合必须是有序序列
	@param beg1 容器1开始迭代器
	@param end1 容器1结束迭代器
	@param beg2 容器2开始迭代器
	@param end2 容器2结束迭代器
	@param dest  目标容器开始迭代器
	@return 目标容器的最后一个元素的迭代器地址
	set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
*/

struct Print
{
	void operator()(int i) {
		cout << i << ", ";
	}
};

int main() {
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[] = { 1, 3, 5, 7, 9, 11 };
	vector<int> v1(arr1, arr1 + (sizeof(arr1) / sizeof(int)));
	vector<int> v2(arr2, arr2 + (sizeof(arr2) / sizeof(int)));

	// 求交集
	vector<int> res1;
	res1.resize(min(v1.size(), v2.size()));
	// 返回的是交集中最后一个元素的下一位的迭代器
	vector<int>::iterator it1 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), res1.begin());
	for_each(res1.begin(), it1, Print());
	cout << endl;

	// 求并集
	vector<int> res2;
	res2.resize(v1.size() + v2.size());
	vector<int>::iterator it2 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), res2.begin());
	for_each(res2.begin(), it2, Print());
	cout << endl;

	// 求差集
	vector<int> res3;
	res3.resize(max(v1.size(), v2.size()));
	vector<int>::iterator it3 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), res3.begin());
	for_each(res3.begin(), it3, Print());
	cout << endl;

	return EXIT_SUCCESS;
}