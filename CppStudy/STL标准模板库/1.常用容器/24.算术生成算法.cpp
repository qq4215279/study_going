//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//using namespace std;
//
///*
//	accumulate算法 计算容器元素累计总和
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param value累加值
//
//	accumulate(iterator beg, iterator end, value)
//*/
//
///*
//	fill算法 向容器中添加元素
//	@param beg 容器开始迭代器
//	@param end 容器结束迭代器
//	@param value 填充元素
//
//	fill(iterator beg, iterator end, value)
//*/
//
//struct Print {
//	void operator()(int i) {
//		cout << i << ", ";
//	}
//};
//
//
//int main() {
//	vector<int> v(5, 10);
//	cout << accumulate(v.begin(), v.end(), 100) << endl;
//
//	fill(v.begin(), v.begin() + 3, 100);
//	for_each(v.begin(), v.end(), Print());
//
//	return EXIT_SUCCESS;
//}