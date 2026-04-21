//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() {
//
//	// 构造函数：
//	//		- 无参构造
//	//		- 拷贝构造函数
//	stack<int> s1;
//
//	// 压栈
//	s1.push(10);
//	s1.push(20);
//	s1.push(30);
//
//	// 获取栈顶的元素
//	int& ele = s1.top();
//	cout << ele << endl;
//	ele = 300;
//	cout << s1.top() << endl;
//
//	// 出栈
//	s1.pop();
//	cout << s1.top() << endl;
//
//
//	// 大小
//	cout << s1.empty() << endl;
//	// 
//	cout << s1.size() << endl;
//
//
//	/*
//	int len = s1.size();
//	for (int i = 0; i < len; i++) {
//		cout << s1.top() << endl;
//		s1.pop();
//	}
//
//	cout << s1.empty() << endl;
//	*/
//
//
//	return 0;
//}