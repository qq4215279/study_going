//#include <iostream>
//#include <deque>
//
//using namespace std; 
//
//void printDeque(deque<int>& deq) {
//	// 使用迭代器
//#if 0
//	for (auto it = deq.begin(); it != deq.end(); it++) {
//		cout << *it << ", ";
//	}
//	cout << endl;
//#else
//	for (int& ele : deq) {
//		cout << ele << ", ";
//	}
//	cout << endl;
//#endif
//}
//
//int main() {
//	int array[5] = { 1, 2, 3, 4, 5 };
//	// 构造
//	deque<int> deq(array, array + 5);
//	printDeque(deq);
//
//	deque<int> deq2(5, 3);
//	printDeque(deq2);
//
//	// 赋值
//	deq2.assign(array, array + 3);
//	printDeque(deq2);
//
//	deq.swap(deq2);
//	printDeque(deq);
//	printDeque(deq2);
//
//	// 大小
//	cout << deq.size() << endl;
//	cout << deq.empty() << endl;
//	deq.resize(10, 1);
//	printDeque(deq);
//
//	// 
//	deq.push_back(100);
//	deq.push_front(200);
//	printDeque(deq);
//
//	deq.pop_back();
//	deq.pop_front();
//	printDeque(deq);
//
//	// 
//	int& ele = deq.at(3);
//	ele = 10;
//
//
//
//
//	return EXIT_SUCCESS;
//}