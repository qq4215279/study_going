//#include <iostream>
//#include <list>
//using namespace std;
//
//
//void printList(list<int>& l) {
//#if 1
//	for (auto it = l.begin(); it != l.end(); it++) {
//		cout << *it << ", ";
//	}
//#else
//	for (int& ele : l) {
//		cout << ele << ", ";
//	}
//#endif
//	cout << endl;
//}
//
//int main() {
//	// 构造函数：
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	list<int> l(arr, arr + 10);
//	printList(l);
//
//
//	// 元素的插入和删除的操作
//	l.push_back(100);		// 在末尾添加元素
//	l.push_front(-100);		// 在首位添加元素
//	printList(l);
//
//	l.pop_back();			// 移除最后的元素
//	l.pop_front();			// 移除最开头的元素
//	printList(l);
//
//	list<int>::iterator it = l.begin();
//	// l.insert(++it, 10);
//	// l.insert(++it, 5, 3);
//	// l.insert(++it, arr + 3, arr + 8);
//	// printList(l);
//
//	// l.erase(++it);
//
//	// 删除[3, 6)
//	list<int>::iterator start = l.begin();
//	for (int i = 0; i < 3; i++) {
//		start++;
//	}
//	list<int>::iterator end = l.begin();
//	for (int i = 0; i < 6; i++) {
//		end++;
//	}
//	l.erase(start, end);
//
//	// l.clear();
//
//	l.remove(8);		// 删除容器中的所有的8
//	printList(l);
//
//
//	// 大小操作
//	cout << l.size() << endl;
//	cout << l.empty() << endl;
//	// l.resize(10);
//
//
//	// 数据存取操作
//	cout << l.front() << endl;
//	cout << l.back() << endl;
//	list<int>::iterator it2 = l.begin();
//	for (int i = 0; i < 3; i++) {
//		it2++;
//	}
//	cout << *it2 << endl;
//
//	// 
//	l.reverse();
//	printList(l);
//
//
//	// 排序
//	l.sort();
//	printList(l);
//
//	return 0;
//}